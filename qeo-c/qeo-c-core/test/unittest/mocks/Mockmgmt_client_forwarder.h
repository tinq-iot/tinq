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

/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKMGMT_CLIENT_FORWARDER_H
#define _MOCKMGMT_CLIENT_FORWARDER_H

#include "unity.h"
#include "qeo/mgmt_client_forwarder.h"

void Mockmgmt_client_forwarder_Init(void);
void Mockmgmt_client_forwarder_Destroy(void);
void Mockmgmt_client_forwarder_Verify(void);




#define qeo_mgmt_client_register_forwarder_IgnoreAndReturn(cmock_retval) qeo_mgmt_client_register_forwarder_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_mgmt_client_register_forwarder_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_mgmt_client_retcode_t cmock_to_return);
#define qeo_mgmt_client_register_forwarder_ExpectAndReturn(ctx, url, locators, nrOfLocators, ssl_cb, cookie, cmock_retval) qeo_mgmt_client_register_forwarder_CMockExpectAndReturn(__LINE__, ctx, url, locators, nrOfLocators, ssl_cb, cookie, cmock_retval)
void qeo_mgmt_client_register_forwarder_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_mgmt_client_ctx_t* ctx, const char* url, qeo_mgmt_client_locator_t* locators, u_int32_t nrOfLocators, qeo_mgmt_client_ssl_ctx_cb ssl_cb, void* cookie, qeo_mgmt_client_retcode_t cmock_to_return);
typedef qeo_mgmt_client_retcode_t (* CMOCK_qeo_mgmt_client_register_forwarder_CALLBACK)(qeo_mgmt_client_ctx_t* ctx, const char* url, qeo_mgmt_client_locator_t* locators, u_int32_t nrOfLocators, qeo_mgmt_client_ssl_ctx_cb ssl_cb, void* cookie, int cmock_num_calls);
void qeo_mgmt_client_register_forwarder_StubWithCallback(CMOCK_qeo_mgmt_client_register_forwarder_CALLBACK Callback);
#define qeo_mgmt_client_get_forwarders_IgnoreAndReturn(cmock_retval) qeo_mgmt_client_get_forwarders_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_mgmt_client_get_forwarders_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_mgmt_client_retcode_t cmock_to_return);
#define qeo_mgmt_client_get_forwarders_ExpectAndReturn(ctx, url, fwd_cb, result_cb, fwd_cookie, ssl_cb, ssl_cookie, cmock_retval) qeo_mgmt_client_get_forwarders_CMockExpectAndReturn(__LINE__, ctx, url, fwd_cb, result_cb, fwd_cookie, ssl_cb, ssl_cookie, cmock_retval)
void qeo_mgmt_client_get_forwarders_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_mgmt_client_ctx_t* ctx, const char* url, qeo_mgmt_client_forwarder_cb fwd_cb, qeo_mgmt_client_forwarder_result_cb result_cb, void* fwd_cookie, qeo_mgmt_client_ssl_ctx_cb ssl_cb, void* ssl_cookie, qeo_mgmt_client_retcode_t cmock_to_return);
typedef qeo_mgmt_client_retcode_t (* CMOCK_qeo_mgmt_client_get_forwarders_CALLBACK)(qeo_mgmt_client_ctx_t* ctx, const char* url, qeo_mgmt_client_forwarder_cb fwd_cb, qeo_mgmt_client_forwarder_result_cb result_cb, void* fwd_cookie, qeo_mgmt_client_ssl_ctx_cb ssl_cb, void* ssl_cookie, int cmock_num_calls);
void qeo_mgmt_client_get_forwarders_StubWithCallback(CMOCK_qeo_mgmt_client_get_forwarders_CALLBACK Callback);
#define qeo_mgmt_client_get_forwarders_sync_IgnoreAndReturn(cmock_retval) qeo_mgmt_client_get_forwarders_sync_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_mgmt_client_get_forwarders_sync_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_mgmt_client_retcode_t cmock_to_return);
#define qeo_mgmt_client_get_forwarders_sync_ExpectAndReturn(ctx, url, fwd_cb, fwd_cookie, ssl_cb, ssl_cookie, cmock_retval) qeo_mgmt_client_get_forwarders_sync_CMockExpectAndReturn(__LINE__, ctx, url, fwd_cb, fwd_cookie, ssl_cb, ssl_cookie, cmock_retval)
void qeo_mgmt_client_get_forwarders_sync_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_mgmt_client_ctx_t* ctx, const char* url, qeo_mgmt_client_forwarder_cb fwd_cb, void* fwd_cookie, qeo_mgmt_client_ssl_ctx_cb ssl_cb, void* ssl_cookie, qeo_mgmt_client_retcode_t cmock_to_return);
typedef qeo_mgmt_client_retcode_t (* CMOCK_qeo_mgmt_client_get_forwarders_sync_CALLBACK)(qeo_mgmt_client_ctx_t* ctx, const char* url, qeo_mgmt_client_forwarder_cb fwd_cb, void* fwd_cookie, qeo_mgmt_client_ssl_ctx_cb ssl_cb, void* ssl_cookie, int cmock_num_calls);
void qeo_mgmt_client_get_forwarders_sync_StubWithCallback(CMOCK_qeo_mgmt_client_get_forwarders_sync_CALLBACK Callback);
#define qeo_mgmt_client_free_forwarder_IgnoreAndReturn(cmock_retval) qeo_mgmt_client_free_forwarder_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void qeo_mgmt_client_free_forwarder_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_mgmt_client_retcode_t cmock_to_return);
#define qeo_mgmt_client_free_forwarder_ExpectAndReturn(forwarder, cmock_retval) qeo_mgmt_client_free_forwarder_CMockExpectAndReturn(__LINE__, forwarder, cmock_retval)
void qeo_mgmt_client_free_forwarder_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, qeo_mgmt_client_forwarder_t* forwarder, qeo_mgmt_client_retcode_t cmock_to_return);
typedef qeo_mgmt_client_retcode_t (* CMOCK_qeo_mgmt_client_free_forwarder_CALLBACK)(qeo_mgmt_client_forwarder_t* forwarder, int cmock_num_calls);
void qeo_mgmt_client_free_forwarder_StubWithCallback(CMOCK_qeo_mgmt_client_free_forwarder_CALLBACK Callback);

#endif
