#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>


long fact(int i)
{
	long temp;
	if (i==0)
	{
		temp = 1;
	}
	else
	{
		temp = i * fact(i - 1);
	}
	return temp;
}


int main()
{

	int num;
	cout << "请输入一个0-10之间的数" << endl;
	cin >> num;
	long res = fact(num);
	cout << num << "的阶乘为" <<res<< endl;


	system("pause");
	return 0;
}
