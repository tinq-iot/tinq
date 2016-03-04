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

/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

package org.qeo;

import org.qeo.QeoType;

/**
 * this is the device ID generated by Qeo.
 */
@QeoType
public class DeviceId
{
    public long upper;

    public long lower;

    /**
     * Default constructor.  This is used by Qeo to construct new objects.
     */
    public DeviceId()
    {
    }

    @Override
    public boolean equals(Object obj)
    {
        if (obj == this) {
            return true;
        }
        if ((obj == null) || (obj.getClass() != this.getClass())) {
            return false;
        }
        final DeviceId myObj = (DeviceId) obj;
        if (upper != myObj.upper) {
            return false;
        }
        if (lower != myObj.lower) {
            return false;
        }
        return true;
    }

    @Override
    public int hashCode()
    {
        final int prime = 31;
        int result = 1;
        result = prime * result + (int) (upper ^ (upper >>> 32));
        result = prime * result + (int) (lower ^ (lower >>> 32));
        return result;
    }
}
