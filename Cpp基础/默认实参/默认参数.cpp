#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

//默认参数必须在函数结尾
void compare(int num1, int num2=100)
{
	if (num1>num2)
	{
		cout << "大于";
	}
	else if (num1<num2)
	{
		cout << "小于";
	}
	else
	{
		cout << "等于";
	}




}

int main()
{


	int a = 18;
	int b = 120;
	compare(a);
	compare(b);
	compare(a, b);


	system("pause");
	return 0;
}