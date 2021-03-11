#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main() 
{
	
	char cArray[10];
	float fArray[20];


	//数组不足的部分为0
	int scoreArray[4] = {32,244,2,1};
	int scoreArray1[] = { 32,244,2,1 };
	
	//C++ 11新版本数组的声明和赋值
	int scoreArray11[]{32,244,2,1}; //数组的元素都是有索引的

	cout << scoreArray11[1] << endl;




}