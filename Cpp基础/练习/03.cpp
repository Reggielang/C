#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;



int main()
{
	//1.�û������ף�ת��Ϊ������������
	float M;
	printf("�������Ƕ����ף�\n");
	cin >> M;
	printf("��������%.2f��,Ȼ��ת��Ϊ%.2f����\n", M, 100 * M);
	

	//2.�û������룬����ת��Ϊ�����죬����Сʱ�����ٷ��ӣ������벢��ʾ������
	int Sec;
	printf("����������һ������\n");
	cin >> Sec;
	printf("����ת��Ϊ��=%f,Сʱ=%f,����=%f,��=%f\n", float(Sec) / (3600 * 24), float(Sec) / 3600, float(Sec) / 60,float(Sec));


	//3.�û�����һ���༶��������Ů���������������Ů���ı������ٷֱȣ�
	int man;
	printf("������������������");
	cin >> man;
	int gril;
	printf("������Ů����������");
	cin >> gril;

	float per = float(gril) / (man + gril);
	printf("Ů���ı���Ϊ%.1f%%", per*100);



	////��ϰ1
	//cout << "������������" << endl;
	//float shengao;
	//cin >> shengao;
	//cout << "��������" << int(shengao * 100) << "����" << endl;
	////��ϰ2
	////int num;
	////cout << "������һ������(��λ��)" << endl;
	////cin >> num;
	//////8739 int �������������С�������Զ�����С���Ĳ���
	////int ge = num % 10;
	////int shi = (num % 100) / 10;
	////int bai = (num % 1000) / 100;
	////int qian = num / 1000;
	////cout << ge <<" "<< shi<<" " << bai<<" " << qian<<endl;

	////��ϰ2
	//int sec;
	//cout << "����������";
	//cin >> sec;

	//int days = sec / (24 * 60 * 60);

	//int hour = (sec - days*(24 * 60 * 60)) / (60 * 60);
	//int min = (sec % (60 * 60))/60;
	//int secleft = sec % 60;

	//cout << days << "��" << hour << "Сʱ" << min << "����" << secleft << "��";



	
	system("pause");
	return 0;
}