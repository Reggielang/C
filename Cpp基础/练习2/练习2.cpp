#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<array>
using namespace std;
#include<string>


//��ϰ��2
struct CandyBar {
	string Brand;
	float KG;
	int J;
};

int main()
{

	//��ϰ��
	//array<char, 30> str = { };
	//array<float, 13> chunk = {  };
	char actor[30];
	float chunk[13];

	//��ϰ��2--�ṹ���ʹ��
	CandyBar snack{ "Mocha Munch",2.3,500 };
	cout << snack.Brand << " " << snack.KG << " " << snack.J << endl;

	//��ϰ��3
	array<float,3> mark;
	cout << "��������ĵ�һ��50�׳ɼ���";
	cin >> mark[0];
	cout << "��������ĵڶ���50�׳ɼ���" ;
	cin >> mark[1];
	cout << "��������ĵ�����50�׳ɼ���";
	cin >> mark[2];
	float avg = (mark[0] + mark[1] + mark[2]) / mark.size();
	printf("��һ�γɼ�%.2f��,�ڶ��γɼ�%.2f��,�����γɼ�%.2f��,ƽ���ɼ�%.2f��", mark[0], mark[1], mark[2], avg);

	system("pause");
	return 0;
}