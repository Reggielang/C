#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;


//���غ�����������ͬ���������б�ͬ�ĺ���������ʱ��ϵͳ��������Ǵ��ݵ�ʵ����ѡ����ò�ͬ�ĺ���
void print(const char *cp)
{

	cout << "1:" << *cp << endl;
}

void print(const int *beg, const int *end)
{
	int length = end - beg;
	for (int i = 0; i <= length; i++)
	{
		cout << "2:" << *(beg + i) << endl;
	}

}
void print(const int ia[], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "3:" << ia[i] << endl;
	}

}



int main()
{
	//���ݵ�ʵ����char���͵�ָ��
	char c = 'a';
	print(&c);

	const size_t size = 5;
	int arr[size] = { 1,2,3,4,5 };
	//���ݵ�������int���͵�ָ��
	print(&arr[2], &arr[size - 1]);

	print(arr,size);


	system("pause");
	return 0;
}