#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>

//通过形参改变一个函数内实参的值？ 必须通过地址传递
//指针间接赋值条件 1.两个变量 2.建立关系 3.通过*操作内存
int num1(int a) //两个a不一样的
{
	printf("a=%p\n", &a);
	a = 10;
	return a;
}

void pnum(int *a) //指针可以通过形参改变一个函数内实参的值
{
	*a = 8; //*代表取出所对应地址的内容！！！
}

int main(void)
{
	int a = 20;
	printf("a=%p\n", &a);
	int b = num1(a);
	printf("b=%d\n", b); //返回10


	int c = 100;
	pnum(&c);
	printf("c=%d\n", c); 
	printf("\n");
	system("pause");
	return 0;
}