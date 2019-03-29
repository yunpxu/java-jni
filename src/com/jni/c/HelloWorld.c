#include <stdio.h>
#include <jni.h>
#include "com_jni_HelloWorld.h"

JNIEXPORT jstring JNICALL Java_com_jni_HelloWorld_sayHello
  (JNIEnv *env, jobject obj, jstring str) {
    printf("%s\n",(*env)->GetStringUTFChars(env, str,0));
    return str;
}
int main()
{

}