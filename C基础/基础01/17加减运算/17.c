#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main() 
{
	//%ֻ��������������
	int a = 10;
	int b = 5;
	double c = a + b;
	printf("%f", c);

	int d = 10 / 3;
	printf("\n%d", d);
	system("pause");

	//31��2ȡ����� --1����2��������1������0 ����2������Ҳ��1
	/*
	* 31 2
	* �����15 7 3 1 0 
	* ������1  1 1 1 1
	*/

	//��8829��2ȡ��֮���ֵ
	int x = 8829 % 2;
	printf("\n%d", x);
	system("pause");
}