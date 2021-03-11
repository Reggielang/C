#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main() 
{
	//C语言风格
	char website[] = { 's','i','k','i' };//因为没有结尾\0所以会输出一些乱码
	char website2[] = { 's','i','k','i','\0' };//空字符:\0（字符串以\0结尾）
	cout << website<<endl<<website2<<endl; 

	//strlen --取得字符串长度
	char web[] = "sikiedu";
	cout << strlen(web) << endl;
	cout << web[3] << endl;

	//获得输入的字符串
	//char web2[20];
	//cin >> web2;
	//cout << web2 << endl;


	char str[] = "dadahtrkromrlotmltrbrl;kb;rtk;rt"
		"oeroerjgerlkkerfpflwepfw";//拼接字符串

	//cin的输入 会以空格，制表符，回车 来区分输入的。
	char name[30];
	char food[40];
	cout << "你的名字是："; 
	//cin >> name;
	cin.getline(name,30); //获取一行输入

	cout << "你喜欢的食物：";
	//cin >> food;
	cin.getline(food, 40);

	cout << name << "喜欢吃" << food;

	system("pause");
	return 0;
}

