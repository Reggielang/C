#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

int main()
{
	//C++�� free() ��delete������
		/*1��new / delete��C++�Ĳ���������malloc / free��C�еĺ�����

		2��new�������£�һ�Ƿ����ڴ棬���ǵ�����Ĺ��캯����ͬ����delete�������������������ͷ��ڴ档��malloc��freeֻ�Ƿ�����ͷ��ڴ档

		3��new��������һ�����󣬶�malloc�������һ���ڴ棻new�����Ķ�������ó�Ա�������ʣ���Ҫֱ�ӷ������ĵ�ַ�ռ䣻malloc�������һ���ڴ�������ָ����ʣ������������ƶ�ָ�룻new������ָ���Ǵ���������Ϣ�ģ���malloc���ص���voidָ�롣

		4��new / delete�Ǳ����֣�����Ҫͷ�ļ�֧�֣�malloc / free��Ҫͷ�ļ��⺯��֧�֡�*/
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


	//��new(����һ���µ��ڴ�)����������

	int *p = new int[20];
	p[0] = 90;
	cout << p[0] << endl;
	*(p + 2) = 80;
	cout << *(p + 2) << endl;

	delete[] p;


	system("pause");
	return 0;
}