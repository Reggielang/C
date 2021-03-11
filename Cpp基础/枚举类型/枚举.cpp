#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>


//枚举，里面放的是变量=对应一个数字，但可以随便改的
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