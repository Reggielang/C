#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	//指针的类型不单单决定了步长，也决定了解析方式
	//步长：指针加1，1就是步长 指针的类型决定了往前走几个字节
	int num = 10;
	int *p = &num;  //指针在32位环境下 4个字节

	printf("%p,%p\n", p, p + 1);//指针加1是加了一个指针所指向类型的大小, 所以是4字节+4字节 
	

	char str = 'h';
	char *pstr = &str;
	//pstr+sizeof(*pstr)*1
	printf("%p,%p\n", pstr, pstr + 1); //实际地址加了1，因为char类型大小是1.
	printf("\n");
	system("pause");
	return 0;
}