#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<array>
using namespace std;
#include<string>


int main()
{
	array<int, 9> a1 = { 2,354,231231,334,245,3,3,3 };
	array<int, 9> a2;
	a2 = a1;
	cout << a2[4] << endl;

	system("pause");
	return 0;
}