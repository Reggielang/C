#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;



int main()
{
	//1.用户输入米，转化为厘米输出结果。
	float M;
	printf("你的身高是多少米？\n");
	cin >> M;
	printf("你的身高是%.2f米,然后转化为%.2f厘米\n", M, 100 * M);
	

	//2.用户输入秒，把它转化为多少天，多少小时，多少分钟，多少秒并显示出来。
	int Sec;
	printf("请输入任意一个秒数\n");
	cin >> Sec;
	printf("可以转化为天=%f,小时=%f,分钟=%f,秒=%f\n", float(Sec) / (3600 * 24), float(Sec) / 3600, float(Sec) / 60,float(Sec));


	//3.用户输入一个班级的男生，女生的数量，并输出女生的比例（百分比）
	int man;
	printf("请输入男生的数量：");
	cin >> man;
	int gril;
	printf("请输入女生的数量：");
	cin >> gril;

	float per = float(gril) / (man + gril);
	printf("女生的比例为%.1f%%", per*100);



	////练习1
	//cout << "请输入你的身高" << endl;
	//float shengao;
	//cin >> shengao;
	//cout << "你的身高是" << int(shengao * 100) << "厘米" << endl;
	////练习2
	////int num;
	////cout << "请输入一个数字(四位数)" << endl;
	////cin >> num;
	//////8739 int 类型如果接收了小数，会自动销毁小数的部分
	////int ge = num % 10;
	////int shi = (num % 100) / 10;
	////int bai = (num % 1000) / 100;
	////int qian = num / 1000;
	////cout << ge <<" "<< shi<<" " << bai<<" " << qian<<endl;

	////练习2
	//int sec;
	//cout << "请输入秒数";
	//cin >> sec;

	//int days = sec / (24 * 60 * 60);

	//int hour = (sec - days*(24 * 60 * 60)) / (60 * 60);
	//int min = (sec % (60 * 60))/60;
	//int secleft = sec % 60;

	//cout << days << "天" << hour << "小时" << min << "分钟" << secleft << "秒";



	
	system("pause");
	return 0;
}