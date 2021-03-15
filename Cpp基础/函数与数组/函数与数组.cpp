#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;

//arr是一个指针，指向数组的第一个元素，const int类型，所以不能修改数组内的值。
//在函数体内，可以将arr直接当作数组名来使用，*arr和arr的意义相同。
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
	cout << "请输入该学生的所有成绩：" << endl;
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
	cout << "该学生的所有成绩如下：" << endl;
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

	cout << "该名学生的总成绩为：" << totalsocre << endl;


	int student2[size] = {};
	fill_arr(student2, size);
	totalsocre= sum_arr(student2,size);
	print_arr(student2, size);
	ratio(student2, size,totalsocre);
	cout << "各科成绩的百分比为(%)：" << endl;
	print_arr(student2, size);



	system("pause");
	return 0;
}