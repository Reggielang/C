#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;

int get_input(int arr[], const int n)
{
	cout << "����������������(���븺����ǰ��������)��" << endl;
	int temp;
	int time = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp >= 0)
		{
			arr[i] = temp;
			time++;
		}
		else
		{
			break;
		}
	}
	return time;
}

void print_arr(int arr[],int n) 
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i]> 0)
		{
			cout<< "��ĵ�"<<i+1<<"�����������" << arr[i] << endl;
		}
	}
}

float avg(int arr[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum/n;
}


int main()
{
	const int size = 10;
	int arr[size] = {};

	//�õ�����Ĵ�����Ϊ��������������
	int time = get_input(arr, size);
	
	print_arr(arr, time);
	cout << "���ƽ������Ϊ��" << avg(arr, time)<<endl;

	system("pause");
	return 0;
}