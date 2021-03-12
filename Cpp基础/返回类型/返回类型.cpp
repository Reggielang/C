#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>


//没有返回值的函数，可以使用return；
void swap(int &a, int &b)
{
	if (a>=b)
	{
		return;
	}
	else
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
		return;
	}
}
//有返回值的函数，每个return都必须带有值
int max(int a, int b)
{
	if (a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

//返回的对象本身

int &sum(int &a, int &b, int &res)
{
	return res = a + b;
}



int main()
{
	int num1 = 20;
	int num2 = 15;

	//引用类型必须输入变量
	swap(num1, num2);
	cout << num1 << " " << num2<<endl;

	int res = max(20, 15);

	cout << "最大值为" << res << endl;

	res = sum(num1, num2,res);
	cout << res << endl;

	system("pause");
	return 0;
}

