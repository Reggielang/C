#include<stdio.h>
#include<stdlib.h>
#include"hehe.h"

//声明一个函数 --在main函数之前
void add(int a, int b)
{
	int c = a + b;
	printf("a+b = %d\n", c);
}


int main()
{
	add(1, 3);
	hehe();//调用头文件里的函数
	system("pause");
	return 0;
}