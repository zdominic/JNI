#include <jni.h>
        //包含jni.h头文件  定义了java和c之间数据对应关系以及java和c数据转换的函数
		/**
		 *返回值jstring
		 *函数名：Java_包名(.以_代替)_类名_函数名
		 *JNIEnv *env 结构体的二级指针  提供了java和c数据转换的函数  (jni环境提供)
		 *jobject obj 调用当前方法的java类(c语言调用java方法需要这个参数)jni环境提供
		 */
jstring Java_com_example_dominic_jni_MainActivity_hello(JNIEnv *env,jobject obj){
	char *buf="hello";
	return (*env)->NewStringUTF(env,buf);
}