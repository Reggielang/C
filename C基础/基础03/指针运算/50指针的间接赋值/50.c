#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>

//ͨ���βθı�һ��������ʵ�ε�ֵ�� ����ͨ����ַ����
//ָ���Ӹ�ֵ���� 1.�������� 2.������ϵ 3.ͨ��*�����ڴ�
int num1(int a) //����a��һ����
{
	printf("a=%p\n", &a);
	a = 10;
	return a;
}

void pnum(int *a) //ָ�����ͨ���βθı�һ��������ʵ�ε�ֵ
{
	*a = 8; //*����ȡ������Ӧ��ַ�����ݣ�����
}

int main(void)
{
	int a = 20;
	printf("a=%p\n", &a);
	int b = num1(a);
	printf("b=%d\n", b); //����10


	int c = 100;
	pnum(&c);
	printf("c=%d\n", c); 
	printf("\n");
	system("pause");
	return 0;
}