/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class app_quant_clr_CLRRuntime */

#ifndef _Included_app_quant_clr_CLRRuntime
#define _Included_app_quant_clr_CLRRuntime
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     app_quant_clr_CLRRuntime
 * Method:    nativeCreateInstance
 * Signature: (Ljava/lang/String;I[Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL Java_app_quant_clr_CLRRuntime_nativeCreateInstance
  (JNIEnv *, jclass, jstring, jint, jobjectArray);

/*
 * Class:     app_quant_clr_CLRRuntime
 * Method:    nativeInvoke
 * Signature: (ILjava/lang/String;I[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_app_quant_clr_CLRRuntime_nativeInvoke
  (JNIEnv *, jclass, jint, jstring, jint, jobjectArray);

/*
 * Class:     app_quant_clr_CLRRuntime
 * Method:    nativeRegisterFunc
 * Signature: (Ljava/lang/String;I)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_app_quant_clr_CLRRuntime_nativeRegisterFunc
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     app_quant_clr_CLRRuntime
 * Method:    nativeInvokeFunc
 * Signature: (II[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_app_quant_clr_CLRRuntime_nativeInvokeFunc
  (JNIEnv *, jclass, jint, jint, jobjectArray);

/*
 * Class:     app_quant_clr_CLRRuntime
 * Method:    nativeGetProperty
 * Signature: (ILjava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_app_quant_clr_CLRRuntime_nativeGetProperty
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     app_quant_clr_CLRRuntime
 * Method:    nativeSetProperty
 * Signature: (ILjava/lang/String;[Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_app_quant_clr_CLRRuntime_nativeSetProperty
  (JNIEnv *, jclass, jint, jstring, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
