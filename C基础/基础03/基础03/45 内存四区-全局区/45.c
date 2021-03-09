#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

char *pMem1()
{
	//这个字符串是怎么存进指针里呢？ 指针变量在32位下都是4个字节  只存了一个地址，实际字符串本身在全局区
	char *p1 = "hehe12345";
	return p1;
}

char *pMem2()
{
	//两个不同函数中定义了一个相同字符串，那地址是否一样呢？ 一样。全局区相同字符串，常量合并。
	char *p2 = "hehe12345";
	return p2;
}

int main()
{
	char *p1 = NULL;
	char *p2 = NULL;

	p1 = pMem1();
	p2 = pMem2();
	//%s--打印地址指向的内容
	printf("p1=%s,p1=%p\n", p1, p1);
	printf("p2=%s,p2=%p\n", p2, p2);
	system("pause");
	return 0;
}