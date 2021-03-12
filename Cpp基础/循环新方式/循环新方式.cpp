#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

int main()
{
	int score[] = { 2,3,54,56,6,7,8 };

	//通过循环设置值
	for (int& temp : score)
	{
		temp = 10;
	}

	for ( int temp: score)
	{
		cout << temp << endl;
	}



	system("pause");
	return 0;
}