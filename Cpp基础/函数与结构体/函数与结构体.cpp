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

//结构体在函数中可以被当作基本类型使用，作为参数传递，或者返回值返回
//结构体较大时，为了避免复制副本，可以直接使用引用&变量，或者指针。
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

	cout << "工作了" << day.hours << "小时" << day.mins << "分钟" << endl;

	system("pause");
	return 0;
}