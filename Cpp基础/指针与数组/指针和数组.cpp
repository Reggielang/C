#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

int main()
{

	int a[]{ 1,3323,1232,55,5436,776 ,231,2};

	//a会输出地址 因为数组实际上是一个指针，指向第一个元素的地址
	cout << a << endl;
	cout << *a << endl; //*用于取地址对应的内存上的数据
	cout << &a[0] << endl;

	//a+1实际上是地址加+1,那么地址+1，他就会加上这个值的类型的大小
	a + 1;

	cout << a + 1 << endl;
	cout << *(a + 1) << endl;

	//通过指针修改数组的值
	*(a + 1) = 100;
	cout << a[1] << endl;

	system("pause");
	return 0;
}