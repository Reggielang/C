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
	cout << "������һ��0-10֮�����" << endl;
	cin >> num;
	long res = fact(num);
	cout << num << "�Ľ׳�Ϊ" <<res<< endl;


	system("pause");
	return 0;
}
