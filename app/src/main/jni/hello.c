//
// Created by TGCit on 2019/8/2.
//
#include <jni.h>
#include <stdio.h>
#include <android/log.h>

JNIEXPORT jstring JNICALL Java_com_xietong_testndkautodebug_HelloWorld_getMessage
  (JNIEnv *env , jclass cla){
  __android_log_print(ANDROID_LOG_ERROR, "hello.c", "I am from native");
    return (*env)->NewStringUTF(env,"I am from native");
  }

JNIEXPORT jint JNICALL Java_com_xietong_testndkautodebug_HelloWorld_add
  (JNIEnv *env, jclass cla, jint a, jint b){
    return a+b;
  }