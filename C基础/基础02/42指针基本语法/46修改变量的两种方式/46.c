#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	//变量名：一段连续内存空间的别名
	//数据类型：是固定内存大小的别名
	//直接通过变量名修改变量
	int a = 10;
	a = 1;
	printf("a=%d\n", a);

	//间接通过地址修改变量
	int *p = &a; //变量地址类似于身份证号
	printf("p=%p,&a=%p\n", p, &a); 
	*p = 100;
	printf("a=%d\n", a);
	printf("\n");
	system("pause");
	return 0;

}