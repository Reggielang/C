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
	//int i;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << i<<endl;
	//}

	////练习2 --会报错
	//int j;
	//for (int j = 0; j < 11; j+=3)
	//{
	//	cout << j;
	//}
	//cout<< j << endl;


	////练习3

	//int a = 5;
	//while (++a<9)
	//{
	//	cout << a++ << endl;
	//}

	////练习4
	//int k = 8;
	//do
	//{
	//	cout << "k=" << k << endl;
	//} while (k++<5);


	////练习5 --打印1 2 4 8 16 32 64 的for循环

	//int x = 0;
	//for (int i = 0; i < 7; i++)
	//{
	//	cout << pow(2,i) << endl;
	//}
	//int i = 1;
	//for (int i = 1;i <=64; i*2)
	//{
	//	cout << i << endl;
	//}


	//练习6 --用户输入两个整数，输出这两个整数之间（包括这两个整数）的所有整数和
	int num1;
	cout << "请输入第一个数字：";

	cin >> num1;
		int num2;
	cout << "请输入第二个数字：";
	cin >> num2;
	int total=0;
	for (int i = num1; i <= num2; i++)
	{
		 total += i;
	}
	cout << total << endl;

	////练习7 --用户可以持续输入数字，每次输入之后，报告当前输入的所有输入的和。当用户输入0的时候程序结束。
	//cout << "请输入数字：" << endl;
	//float input;
	//float sum=0;

	//while (1)
	//{
	//	cin >> input;
	//	sum += input;
	//	cout << "当前总输入的和为" << sum << endl;
	//	if (input == 0)
	//		break;
	//}

	system("pause");
	return 0;
}