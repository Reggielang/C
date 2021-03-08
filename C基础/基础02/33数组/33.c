#include<stdio.h>
#include<stdlib.h>

int main()
{
	//int 数据类型
	//a 数组名
	//[]  数组元素个数 {}数组的内容
	//int a[5] = { 1,2,3,4,5 };

	int a[] = { 1,2,3 }; //当数组元素可以确定的时候数组个数可以省略

	int b[5] = { 1,2,3 };//不足的话，自动填充0
	printf("%p", &a);
	//数组下标是从0开始的
	//数组在内存中是连续排列的
	//sizeof 是求变量所需内存
	//求数组元素个数：  sizeof(a)/sizeof(int)

	system("pause");
	return 0;
}