#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//结构体也是一种数据类型，自己定义的类型
//1. 结构体类型定义 2.结构体变量定义 3.结构体变量的初始化 4.typedef改变类型名
//struct Test 好比int float的数据类型
struct Test
{
	char face[10];
	int eyesize;
};

//声明赋值二合一
int a=10;

struct Test name01 = {"芸儿",20};


struct Test02
{
	char face[10];
	int eyesize;
}test02 = {"baby",30};

//struct Test04 替换为Test04
typedef struct Test04
{
	char face[10];
	int eyesize;
}Test04;

Test04 name04 = {"hehe",12};


int main(void)
{


	printf("\n");
	system("pause");
	return 0;
}