#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;


void fill_names(string name[], int n)
{

	for (int i = 0; i < n; i++)
	{
		getline(cin, name[i]);
	}

}


void print_name(string name[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ":" << name[i] << endl;
	}
}


int main()
{

	const int size = 5;
	string name[size] = {};
	cout << "请输入" << size << "个你喜欢的游戏名称" << endl;
	fill_names(name, size);
	print_name(name, size);
	system("pause");
	return 0;
}