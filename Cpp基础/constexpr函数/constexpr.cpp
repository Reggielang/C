#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

//常量表达式函数
constexpr int fact(int n)
{
	/*if (n==1)
	{
		return 1;
	}
	else
	{
		n*fact(n - 1);
	}*/
	return n == 1 ? 1 : n*fact(n - 1);
}

//常量表达式
constexpr int num = 5;

int main()
{
	//在编译期间可以计算返回结果
	cout << fact(num) << endl;

	//实参为变量时，在程序运行期间返回结果
	int i = 8;
	int res = fact(8);
	cout << res << endl;
	system("pause");
	return 0;
}