#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//�ṹ��Ҳ��һ���������ͣ��Լ����������
//1. �ṹ�����Ͷ��� 2.�ṹ��������� 3.�ṹ������ĳ�ʼ�� 4.typedef�ı�������
//struct Test �ñ�int float����������
struct Test
{
	char face[10];
	int eyesize;
};

//������ֵ����һ
int a=10;

struct Test name01 = {"ܿ��",20};


struct Test02
{
	char face[10];
	int eyesize;
}test02 = {"baby",30};

//struct Test04 �滻ΪTest04
typedef struct Test04
{
	char face[10];
	int eyesize;
}Test04;

Test04 name04 = {"hehe",12};


int main(void)
{


	printf("\n");
	system("pause");
	return 0;
}