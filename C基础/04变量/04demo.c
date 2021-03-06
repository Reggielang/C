#include<stdio.h>
#include<stdlib.h>


void main()
{
	int a = 10;
	printf("%p", &a);//打印内存当中的地址
	system("pause");


	//作业
	char name = "稳中带皮";
	int age = 25;
	char hobby = "喜欢学习C/C++";
	printf(name,age,hobby);
	system("pause");
}