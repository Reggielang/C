#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main() 
{
	//%只能用于整数求余
	int a = 10;
	int b = 5;
	double c = a + b;
	printf("%f", c);

	int d = 10 / 3;
	printf("\n%d", d);
	system("pause");

	//31和2取余过程 --1除以2的余数是1！！！0 除以2的余数也是1
	/*
	* 31 2
	* 结果：15 7 3 1 0 
	* 余数：1  1 1 1 1
	*/

	//求8829和2取余之后的值
	int x = 8829 % 2;
	printf("\n%d", x);
	system("pause");
}