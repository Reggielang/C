#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;

int get_input(int arr[], const int n)
{
	cout << "请输入你的射击分数(输入负数提前结束输入)：" << endl;
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
			cout<< "你的第"<<i+1<<"次射击分数：" << arr[i] << endl;
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

	//得到输入的次数作为后续函数的输入
	int time = get_input(arr, size);
	
	print_arr(arr, time);
	cout << "你的平均分数为：" << avg(arr, time)<<endl;

	system("pause");
	return 0;
}