#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

int main()
{
	//练习1
	char ch;
	cin >> ch;
	int a_grade=0, b_grade=0, c_grade=0, d_grade=0,f_grade=0;
	switch (ch)
	{
	case 'A':
		a_grade++;
		break;
	case 'B':
		b_grade++;
		break;
	case 'C':
		c_grade++;
		break;
	case 'D':
		d_grade++;
		break;
	default:
		f_grade++;
		break;
	}

	cout << a_grade << b_grade << c_grade << d_grade << f_grade<<endl;

	//练习2 10的阶乘
	int num=10;
	int sum = 1;
	for (int i = 1; i <= num; i++)
	{
		sum = sum*i;
	}
	cout << sum << endl;

	//练习3 1！+2！+。。。+10！的值
	long long  res = 0;
	
	for (int i = 1; i <= 5; i++)
	{
		long long  sumtemp = 1;
		for (int j = 1; j <= i; j++)
		{
			sumtemp = sumtemp*j;
		}
		res += sumtemp;
	}
	cout << res << endl;


	//练习4 判断是否是回文--werdrew
	string str;
	cin >> str;

	bool huiwen = true;
	for (int  i = 0; i < str.size()/2; i++)
	{
		if (str[i]!=str[str.size()-1-i])
		{
			huiwen = false;
		}
	}

	cout << huiwen << endl;

	//练习5 --输出三个值，然后三个值从小到大排序输出。
	int a;
	cout << "输入第一个值：";
	cin >> a;
	int b;
	cout << "输入第二个值：";
	cin >> b;
	int c;
	cout << "输入第三个值：";
	cin >> c;

	if (a>b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (b>c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	if (a>b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	cout << a << " " << b << " " << c << endl;

	system("pause");
	return 0;









}