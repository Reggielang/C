#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//1.用户输入米，转化为厘米输出结果。
int main()
{
	int  M;
	scanf("%d", M);
	printf("你的身高是%d,然后转化为%d", M, 100 * M);
	system("pause");
	return 0;
}