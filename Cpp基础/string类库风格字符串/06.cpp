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
	//str1 = str2;  //�ַ��������໥��ֵ
	//cout << str1 << endl;


	getline(cin,str1); //getline��ȡһ������
	cout << str1<<endl;

	//�����ַ���
	cout << str2[5] << endl; //�����ַ�������Ϊ5���ַ�

	string strx = "skiedu";
	string stry = "com";
	string s = strx + stry;

	s += strx;
	cout << s << endl;

	//��ȡ�ַ�������

	cout << s.size() << endl;



	system("pause");
	return 0;
}