#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

int main()
{

	int a[]{ 1,3323,1232,55,5436,776 ,231,2};

	//a�������ַ ��Ϊ����ʵ������һ��ָ�룬ָ���һ��Ԫ�صĵ�ַ
	cout << a << endl;
	cout << *a << endl; //*����ȡ��ַ��Ӧ���ڴ��ϵ�����
	cout << &a[0] << endl;

	//a+1ʵ�����ǵ�ַ��+1,��ô��ַ+1�����ͻ�������ֵ�����͵Ĵ�С
	a + 1;

	cout << a + 1 << endl;
	cout << *(a + 1) << endl;

	//ͨ��ָ���޸������ֵ
	*(a + 1) = 100;
	cout << a[1] << endl;

	system("pause");
	return 0;
}