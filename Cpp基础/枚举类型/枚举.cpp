#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>


//ö�٣�����ŵ��Ǳ���=��Ӧһ�����֣����������ĵ�
enum HeroType {
	Tank=1,
	Magic=3,
	ADC,
	Assist,
};
int main()
{
	HeroType herotype = Tank;
	herotype = ADC;


	cout << herotype << endl;

	herotype = HeroType(3);

	cout << herotype << endl;

	system("pause");
	return 0;
}