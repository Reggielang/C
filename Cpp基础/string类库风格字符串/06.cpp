#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

int main()
{
	string str1;
	string str2="www.siki.com";

	//cout << str1 << endl;
	//cout << str2 << endl;
	//str1 = str2;  //字符串可以相互赋值
	//cout << str1 << endl;


	getline(cin,str1); //getline获取一行输入
	cout << str1<<endl;

	//访问字符串
	cout << str2[5] << endl; //访问字符串索引为5的字符

	string strx = "skiedu";
	string stry = "com";
	string s = strx + stry;

	s += strx;
	cout << s << endl;

	//获取字符串长度

	cout << s.size() << endl;



	system("pause");
	return 0;
}