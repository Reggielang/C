#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

//内联函数 提高程序运行速度，但会占用更多的内存
//！内联函数不可进行递归

inline int sum(int a, int b)
{
	return a + b;

}

int main()
{

	int res = sum(10, 10);

	cout << res << endl;

	system("pause");
	return 0;
}