//
// Created by efuious on 2020/6/13.
//

#include <jni.h>
#include <string>

using namespace std;

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_cmaketest_MainActivity_hello(JNIEnv *env, jobject thiz) {
    string str = "Hello from C++";
    return env->NewStringUTF(str.c_str());
}