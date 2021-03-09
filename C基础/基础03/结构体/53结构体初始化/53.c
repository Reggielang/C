#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>


typedef struct Test04
{
	char face[10];
	int eyesize;
}Test04;

Test04 name04 = { "hehe",12 };

int main(void)
{
	Test04 name;
	//name.face ={"haha"};这是错误的因为name.face是一个指针（地址）
	strcpy(name.face, "haha");
	name.eyesize = 100;
	printf("%s,%d\n", name.face, name.eyesize);


	//箭头运算符 --用于指针调用结构体变量
	//结构体声明的时候不开辟空间 必须初始化对象才开辟空间
	Test04 *ptest=&name;
	//ptest->face;
	//ptest->eyesize;
	strcpy(ptest->face, "wawa");
	ptest->eyesize = 80;
	printf("%s,%d\n", ptest->face, ptest->eyesize);

	printf("\n");
	system("pause");
	return 0;
}