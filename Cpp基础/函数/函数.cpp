#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>




//ע�⣺�����������main�����£��ͱ���Ѻ���ԭ��д��main����ǰ(����ֱ�ӰѺ���д��main����ǰ)
void greet();

int sum(int a, int b);
int main()
{
	greet();
	int res = sum(2, 3); //res�Ǿֲ�������������ֻ����main���������������������д���ͬ�����������������Ӱ�졣
	cout << res<<endl;
	system("pause");
	return 0;
}


//�޷���ֵ���޲��� ֱ��ִ�к�����
void greet()
{
	cout << "hello" << endl;
}

//�з���ֵ���в�����return����ֵ
int sum(int a, int b) {
	int res = a + b;
	return res;
}