#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

//Ĭ�ϲ��������ں�����β
void compare(int num1, int num2=100)
{
	if (num1>num2)
	{
		cout << "����";
	}
	else if (num1<num2)
	{
		cout << "С��";
	}
	else
	{
		cout << "����";
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