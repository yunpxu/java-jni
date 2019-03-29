package com.jni;

public class HelloWorld {

    static {
        System.loadLibrary("HelloWorld");
    }

    public native String sayHello(String msg);

    public static void main(String[] args) {
        new HelloWorld().sayHello("Hello JNI");
    }
}