#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

//�������ʽ����
constexpr int fact(int n)
{
	/*if (n==1)
	{
		return 1;
	}
	else
	{
		n*fact(n - 1);
	}*/
	return n == 1 ? 1 : n*fact(n - 1);
}

//�������ʽ
constexpr int num = 5;

int main()
{
	//�ڱ����ڼ���Լ��㷵�ؽ��
	cout << fact(num) << endl;

	//ʵ��Ϊ����ʱ���ڳ��������ڼ䷵�ؽ��
	int i = 8;
	int res = fact(8);
	cout << res << endl;
	system("pause");
	return 0;
}