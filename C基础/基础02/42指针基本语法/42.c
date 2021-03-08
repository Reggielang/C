#include<stdio.h>
#include<stdlib.h>

int main()
{
	//& 取地址运算符   --找到变量在内存中的实际地址
	//*  间接运算符
	int loser = 18;	
	printf("%d\n", &loser); //网名 账号名  网名：Kodi  账号名：456789




	//类型* 指针变量名;
	//指针变量是存放地址的一种变量
	int *p = &loser; //声明和赋值二合一
	*p = 1800; //*就是通过账号ID（地址）查找内存进行操控

	
	int *pa = NULL;//指针声明必须初始化！ 如果没有值就初始化为NULL！
	pa = &loser;

	*pa = 250; //*作用就是通过地址找到对应的内存单元
	//指针变量是一种变量，它可以存储任意类型的地址,地址就好比身份证号，不光能存一个，可以任意存放
	//int存的是整数，指针变量就是存的地址

	printf("%d\n", loser);


	int b = 250;
	//*(&b) = 38;

	int* x = NULL;
	x = &b;
	*x = 38;
	printf("%d\n", b);
	system("pause");
	return 0;
}