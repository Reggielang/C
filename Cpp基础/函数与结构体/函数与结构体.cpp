#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;

struct worktime {
	int hours;
	int mins;
};


const int Min_pre_hour = 60;

//�ṹ���ں����п��Ա�������������ʹ�ã���Ϊ�������ݣ����߷���ֵ����
//�ṹ��ϴ�ʱ��Ϊ�˱��⸴�Ƹ���������ֱ��ʹ������&����������ָ�롣
worktime sum(worktime t1, worktime t2)
{
	worktime total;
	total.mins = (t1.mins + t2.mins) % Min_pre_hour;
	total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Min_pre_hour;
	return total;
}




int main()
{
	worktime morning = { 2,40 };
	worktime afternoon = { 6,30 };
	worktime day = sum(morning, afternoon);

	cout << "������" << day.hours << "Сʱ" << day.mins << "����" << endl;

	system("pause");
	return 0;
}