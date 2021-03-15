#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;


bool lengthcompare(const string &s1, const string &s2)
{
	return size(s1) > size(s2) ? true : false;
}

//将函数指针当作参数传递给另一个函数，可以直接在这个函数中调用函数指针指向的函数
void display(const string &s1, const string &s2, bool(*p)(const string &, const string &)) 
{
	if (p(s1,s2)==true)
	{
		cout << "name1大于name2" << endl;
	}
	else
	{
		cout << "name1小于name2" << endl;
	}

}


int main()
{

	string name1 = "sandy";
	string name2 = "jam";


	//bool res = lengthcompare(name1, name2);
	
	//函数指针 --一个指向函数的指针
	bool(*pf)(const string &, const string &);
	//函数名直接赋值给指针
	pf = lengthcompare;
	//将pf作为实参传递给display函数
	display(name1, name2, pf);

	system("pause");
	return 0;
}