/*
 * Copyright (c) 2016 - Qeo LLC
 *
 * The source code form of this Qeo Open Source Project component is subject
 * to the terms of the Clear BSD license.
 *
 * You can redistribute it and/or modify it under the terms of the Clear BSD
 * License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
 * for more details.
 *
 * The Qeo Open Source Project also includes third party Open Source Software.
 * See LICENSE file for more details.
 */

package org.qeo.sample.simplechat.android;

import org.qeo.DefaultEventReaderListener;
import org.qeo.EventReader;
import org.qeo.EventWriter;
import org.qeo.QeoFactory;
import org.qeo.android.QeoAndroid;
import org.qeo.android.QeoConnectionListener;
import org.qeo.exception.QeoException;
import org.qeo.sample.qsimplechatembedded.R;
import org.qeo.sample.simplechat.ChatMessage;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Toast;

/**
 * This class that extends the android Activity class and uses the ChatMessage class to construct the chat messages that
 * will send around.
 * 
 */
public class ChatActivity
    extends Activity
    implements OnClickListener
{

    private static final String TAG = "QSimpleChat";
    private EventWriter<ChatMessage> mWriter;
    private EventReader<ChatMessage> mReader;
    private QeoFactory mQeo = null;
    private QeoConnectionListener mListener = null;
    private Button mSendButton;
    private EditText mEditText;
    private TextView mTextView;
    private ScrollView mScrollViewTextChat;
    private boolean mQeoClosed = false;

    /**
     * This class that extends DefaultEventReaderListener to be able to override the method onData. The method OnData is
     * called when a message has been sent.
     */
    public class MyListener
        extends DefaultEventReaderListener<ChatMessage>
    {

        @Override
        public void onData(final ChatMessage data)
        {
            mTextView.append(data.from + "@says: " + data.message + "\n");

            /* This line scroll the view to see the last message sent */
            mScrollViewTextChat.smoothScrollTo(0, mTextView.getBottom());
        }
    }

    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_main);

        /* Associate the local variables with the right view */
        mSendButton = (Button) findViewById(R.id.buttonSend);
        mEditText = (EditText) findViewById(R.id.editText);
        mTextView = (TextView) findViewById(R.id.textView);
        mScrollViewTextChat = (ScrollView) findViewById(R.id.scrollChatbox);

        /* Set the listener on the send button */
        mSendButton.setOnClickListener(this);
        mSendButton.setEnabled(false);

        initQeo();
    }

    @Override
    public void onStart()
    {
        super.onStart();
        if (mQeoClosed) {
            // qeo connection got closed while the app was in the background
            initQeo();
        }
    }

    private void initQeo()
    {
        mListener = new QeoConnectionListener() {

            /* When the connection with the Qeo service is ready we can create our reader and writer. */
            @Override
            public void onQeoReady(QeoFactory qeo)
            {
                Log.d(TAG, "onQeoReady");
                mQeo = qeo;
                try {
                    /* Create the Qeo writer and reader */
                    mReader = mQeo.createEventReader(ChatMessage.class, new MyListener());
                    mWriter = mQeo.createEventWriter(ChatMessage.class);
                    mSendButton.setEnabled(true);
                }
                catch (final QeoException e) {
                    Log.e(TAG, "Error creating Qeo reader/writer", e);
                }
                mQeoClosed = false;
            }

            @Override
            public void onQeoError(QeoException ex)
            {

                if (ex.getMessage() != null) {
                    Toast
                        .makeText(ChatActivity.this, "Qeo Service failed due to " + ex.getMessage(), Toast.LENGTH_LONG)
                        .show();
                }
                else {
                    Toast.makeText(ChatActivity.this, "Failed to initialize Qeo Service.Exiting !", Toast.LENGTH_LONG)
                        .show();
                }
                finish();
            }

            @Override
            public void onQeoClosed(QeoFactory qeo)
            {
                Log.w(TAG, "Qeo service connection lost");
                mSendButton.setEnabled(false);
                mQeoClosed = true;
                mReader = null;
                mWriter = null;
                mQeo = null;

                // restart
                initQeo();
            }
        };
        /* Start the Qeo service */
        QeoAndroid.initQeo(getApplicationContext(), mListener);
    }

    @Override
    public void onClick(View view)
    {
        switch (view.getId()) {
            case R.id.buttonSend:
                /* Send button */
                /* Publish the message */
                ChatMessage message = new ChatMessage();
                message.from = android.os.Build.MODEL;
                message.message = mEditText.getText().toString();
                mWriter.write(message);
                /* Clear text field */
                mEditText.setText("");
                break;

            default:
                throw new IllegalArgumentException("Unknown onclick");

        }
    }

    @Override
    protected void onDestroy()
    {
        /* Close the Qeo writer and reader if needed */
        if (mWriter != null) {
            mWriter.close();
        }
        if (mReader != null) {
            mReader.close();
        }

        /* Disconnect from the service */
        if (mListener != null) {
            QeoAndroid.closeQeo(mListener);
        }

        super.onDestroy();
    }
}
