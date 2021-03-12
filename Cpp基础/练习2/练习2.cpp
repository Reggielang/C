#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<array>
using namespace std;
#include<string>


//练习题2
struct CandyBar {
	string Brand;
	float KG;
	int J;
};

int main()
{

	//练习题
	//array<char, 30> str = { };
	//array<float, 13> chunk = {  };
	char actor[30];
	float chunk[13];

	//练习题2--结构体的使用
	CandyBar snack{ "Mocha Munch",2.3,500 };
	cout << snack.Brand << " " << snack.KG << " " << snack.J << endl;

	//练习题3
	array<float,3> mark;
	cout << "请输入你的第一次50米成绩：";
	cin >> mark[0];
	cout << "请输入你的第二次50米成绩：" ;
	cin >> mark[1];
	cout << "请输入你的第三次50米成绩：";
	cin >> mark[2];
	float avg = (mark[0] + mark[1] + mark[2]) / mark.size();
	printf("第一次成绩%.2f秒,第二次成绩%.2f秒,第三次成绩%.2f秒,平均成绩%.2f秒", mark[0], mark[1], mark[2], avg);

	system("pause");
	return 0;
}