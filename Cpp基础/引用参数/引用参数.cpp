#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

void reset(int &i);

int min(int num1, int num2, int num3, int &max);
int main() {


	int num = 10;
	reset(num);
	cout << num << endl;


	int maxnum;
	int minnum;
	minnum = min(20, 15, 23, maxnum);
	cout << "max" << maxnum << endl;
	cout << "min" << minnum << endl;

	system("pause");
	return 0;
}

//�����ñ�����Ϊ����������ʹ�õ���ԭʼ���ݣ������Ǹ�����
//���βε��޸ģ�Ҳ�Ƕ�ʵ�ε��޸ġ�
void reset(int &i)
{
	i = i * 2;
}

//������һ���������Ͳ�����ͨ����������޸�maxnum��ֵ��������ֵ��
int min(int num1, int num2, int num3, int &max)
{
	int temp1, temp2;
	temp1 = num1 < num2 ? num1 : num2;
	temp1 = temp1 < num3 ? temp1 : num3;

	temp2 = num1 > num2 ? num1 : num2;
	temp2 = temp2 > num3 ? temp2 : num3;

	max = temp2;
	return temp1;
}