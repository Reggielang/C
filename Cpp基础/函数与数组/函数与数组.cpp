#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;

//arr��һ��ָ�룬ָ������ĵ�һ��Ԫ�أ�const int���ͣ����Բ����޸������ڵ�ֵ��
//�ں������ڣ����Խ�arrֱ�ӵ�����������ʹ�ã�*arr��arr��������ͬ��
int sum_arr(const int arr[],int n) 
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		res += arr[i];
	}
	return res;

}


void fill_arr(int arr[], int n) {
	cout << "�������ѧ�������гɼ���" << endl;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arr[i] = temp;
	}

}

void ratio(int arr[], int n, int sum)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i] * 100 / sum;
	}

}

void print_arr(const int arr[], int n)
{
	cout << "��ѧ�������гɼ����£�" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] <<" "<< endl;
	}
}

int main()
{
	const int size = 6;
	int student1[size] = {110,110,111,90,88,99};
	int totalsocre = sum_arr(student1, size);

	cout << "����ѧ�����ܳɼ�Ϊ��" << totalsocre << endl;


	int student2[size] = {};
	fill_arr(student2, size);
	totalsocre= sum_arr(student2,size);
	print_arr(student2, size);
	ratio(student2, size,totalsocre);
	cout << "���Ƴɼ��İٷֱ�Ϊ(%)��" << endl;
	print_arr(student2, size);



	system("pause");
	return 0;
}