#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a = 10;
	int *p = NULL;
	p = &a;
	*p = 100;

	char *pp = NULL;
	double *ppp = NULL;
	//指针变量的大小是多少呢？ 指针变量是用来存储地址的。
	//指针无论是什么类型在32位环境下，都是4个字节！！！！64位是8个字节。
	//指针的大小是固定的！
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(pp));
	printf("%d\n", sizeof(ppp));
	system("pause");
	return 0;
}