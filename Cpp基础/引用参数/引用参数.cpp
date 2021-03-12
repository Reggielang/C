#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

void reset(int &i);

int min(int num1, int num2, int num3, int &max);
int main() {


	int num = 10;
	reset(num);
	cout << num << endl;


	int maxnum;
	int minnum;
	minnum = min(20, 15, 23, maxnum);
	cout << "max" << maxnum << endl;
	cout << "min" << minnum << endl;

	system("pause");
	return 0;
}

//将引用变量作为参数，函数使用的是原始数据，而不是副本。
//对形参的修改，也是对实参的修改。
void reset(int &i)
{
	i = i * 2;
}

//定义了一个引用类型参数，通过这个参数修改maxnum的值，获得最大值。
int min(int num1, int num2, int num3, int &max)
{
	int temp1, temp2;
	temp1 = num1 < num2 ? num1 : num2;
	temp1 = temp1 < num3 ? temp1 : num3;

	temp2 = num1 > num2 ? num1 : num2;
	temp2 = temp2 > num3 ? temp2 : num3;

	max = temp2;
	return temp1;
}