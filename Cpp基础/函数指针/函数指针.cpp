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

//������ָ�뵱���������ݸ���һ������������ֱ������������е��ú���ָ��ָ��ĺ���
void display(const string &s1, const string &s2, bool(*p)(const string &, const string &)) 
{
	if (p(s1,s2)==true)
	{
		cout << "name1����name2" << endl;
	}
	else
	{
		cout << "name1С��name2" << endl;
	}

}


int main()
{

	string name1 = "sandy";
	string name2 = "jam";


	//bool res = lengthcompare(name1, name2);
	
	//����ָ�� --һ��ָ������ָ��
	bool(*pf)(const string &, const string &);
	//������ֱ�Ӹ�ֵ��ָ��
	pf = lengthcompare;
	//��pf��Ϊʵ�δ��ݸ�display����
	display(name1, name2, pf);

	system("pause");
	return 0;
}