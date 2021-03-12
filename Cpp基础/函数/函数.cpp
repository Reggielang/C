#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>




//注意：如果函数体在main函数下，就必须把函数原型写在main函数前(或者直接把函数写在main函数前)
void greet();

int sum(int a, int b);
int main()
{
	greet();
	int res = sum(2, 3); //res是局部变量，作用域只存在main函数，所以在其他函数中存在同名变量不会造成任意影响。
	cout << res<<endl;
	system("pause");
	return 0;
}


//无返回值，无参数 直接执行函数体
void greet()
{
	cout << "hello" << endl;
}

//有返回值，有参数，return返回值
int sum(int a, int b) {
	int res = a + b;
	return res;
}