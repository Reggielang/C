#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

int main1()
{
	//goto一般开发不能使用-- 黑客领域的注射有用
	//其实实现一个小目标，一个标号加冒号想往哪跳往哪跳。
A:	printf("呵呵老师你好帅");

	goto A;

	system("pause");
	return 0;
}
int main()
{
	int i = 0;
	A:	if (i<5)
		{
		system("notepad");
		i++;
		goto A;
		system("pause");
		//通过这种方式也可以实现循环
	}
}