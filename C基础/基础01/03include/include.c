#include<stdio.h> //包含我们需要用到的函数的定义
#include<stdlib.h>  //程序运行的过程实际就是把程序加载到计算机内存中变成二进制文件。

void main()
{
	int a = 10;
	printf("%p", &a);//打印内存当中的地址
	system("pause")
}
