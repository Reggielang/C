#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;


//重载函数，名称相同，但参数列表不同的函数，调用时，系统会根据我们传递的实参来选择调用不同的函数
void print(const char *cp)
{

	cout << "1:" << *cp << endl;
}

void print(const int *beg, const int *end)
{
	int length = end - beg;
	for (int i = 0; i <= length; i++)
	{
		cout << "2:" << *(beg + i) << endl;
	}

}
void print(const int ia[], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "3:" << ia[i] << endl;
	}

}



int main()
{
	//传递的实参是char类型的指针
	char c = 'a';
	print(&c);

	const size_t size = 5;
	int arr[size] = { 1,2,3,4,5 };
	//传递的是两个int类型的指针
	print(&arr[2], &arr[size - 1]);

	print(arr,size);


	system("pause");
	return 0;
}