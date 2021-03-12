#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

int main()
{
	//C++中 free() 和delete的区别
		/*1、new / delete是C++的操作符，而malloc / free是C中的函数。

		2、new做两件事，一是分配内存，二是调用类的构造函数；同样，delete会调用类的析构函数和释放内存。而malloc和free只是分配和释放内存。

		3、new建立的是一个对象，而malloc分配的是一块内存；new建立的对象可以用成员函数访问，不要直接访问它的地址空间；malloc分配的是一块内存区域，用指针访问，可以在里面移动指针；new出来的指针是带有类型信息的，而malloc返回的是void指针。

		4、new / delete是保留字，不需要头文件支持；malloc / free需要头文件库函数支持。*/
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


	//用new(开辟一个新的内存)来创建数组

	int *p = new int[20];
	p[0] = 90;
	cout << p[0] << endl;
	*(p + 2) = 80;
	cout << *(p + 2) << endl;

	delete[] p;


	system("pause");
	return 0;
}