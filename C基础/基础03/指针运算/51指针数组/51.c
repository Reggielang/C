#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>



int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;
	
	int d[4] = { 1,2,3,4 };
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", d[i]);
	}

	char *pa[] = {"a","b","c"}; //对应的是三个指针(地址)，指向全局区，第一个指针指向a的内存空间。。。

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", pa[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}