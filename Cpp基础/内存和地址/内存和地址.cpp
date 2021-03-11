#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

int main()
{
	////&取得一个变量的内存地址
	//int a = 10;
	//float b = 9.1f;
	//cout << &a << endl;
	//cout << &b << endl;

	////*从内存地址所对应的内存取得数据
	//cout << *(&a) << endl;
	//cout << a << endl;

	////指针用来存地址的！ //32位环境指针是4字节，  64环境指针是8个字节
	//int *pa = &a;
	////cout << sizeof(pa);

	//cout << pa<<endl; //输出的是地址因为pa存的是地址

	//cout << *pa << endl; //*是代表地址对应的内存上的数据， 所以输出的是地址对应的值

	////指针的常用操作
	//int c = 20;
	//int *p;
	//p = pa;

	//cout << *p << endl;
	//cout << *pa << endl;

	////通过指针来修改值
	//*pa = 100;
	//cout << a << " " << *pa << endl;
	//*p = 300;
	//cout << a << " " << *p << endl;

	////空指针
	//int *p1=NULL;
	////Cpp 引入的空指针
	//int *p2 = nullptr;
	//cout << p1 << p2<<endl;

	////空类型的指针 --可以接受任意类型的地址
	//void *p3;

	//p3 = &a;
	//cout << (int*)p3 << endl; //使用的时候必须转换到对应的类型

	//新开辟一个内存空间
	int *a = new int;
	*a = 100;
	cout << *a << endl;
	//开辟的内存空间没用了之后，要释放
	delete a;


	system("pause");
	return 0;
}