#include <jni.h>
#include <string>

#include <iostream>
#include <math.h>
#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>
#include "../../../../opencv/src/sdk/native/jni/include/opencv2/core.hpp"

using namespace std;
using namespace cv;

extern "C" JNIEXPORT jstring JNICALL
Java_com_coldwizards_nativedemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}