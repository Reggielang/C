#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main()
{
	int a = 1;//4个字节
	double b = 0.5; //8个字节 
	printf("%f", a + b); //8个字节的环境下相加 结果是一个double类型的值
	//转换步骤：小的转大的
	//int>unsigned>long>double

	system("pause");
}