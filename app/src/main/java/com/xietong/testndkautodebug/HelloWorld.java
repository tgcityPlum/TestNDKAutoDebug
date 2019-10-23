package com.xietong.testndkautodebug;

/**
 * Created by TGCit on 2019/8/2.
 */

public class HelloWorld {

    static {
        System.loadLibrary("hello");
    }

    public static native String getMessage();

    public static native int add(int a,int b);
}
