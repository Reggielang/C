#include<stdio.h>
#include<stdlib.h>
#include"hehe.h"

//����һ������ --��main����֮ǰ
void add(int a, int b)
{
	int c = a + b;
	printf("a+b = %d\n", c);
}


int main()
{
	add(1, 3);
	hehe();//����ͷ�ļ���ĺ���
	system("pause");
	return 0;
}