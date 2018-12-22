#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_blogspot_sweetintable_repeater_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++ test gg";
    return env->NewStringUTF(hello.c_str());
}
