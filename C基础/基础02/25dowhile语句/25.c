#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	//先执行一次，再判断条件
	int i = 0;
	do
	{
		printf("hehe\n");
	} while (i>1);
	system("pause");
	return 0;
}