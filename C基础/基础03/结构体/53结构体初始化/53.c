#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>


typedef struct Test04
{
	char face[10];
	int eyesize;
}Test04;

Test04 name04 = { "hehe",12 };

int main(void)
{
	Test04 name;
	//name.face ={"haha"};���Ǵ������Ϊname.face��һ��ָ�루��ַ��
	strcpy(name.face, "haha");
	name.eyesize = 100;
	printf("%s,%d\n", name.face, name.eyesize);


	//��ͷ����� --����ָ����ýṹ�����
	//�ṹ��������ʱ�򲻿��ٿռ� �����ʼ������ſ��ٿռ�
	Test04 *ptest=&name;
	//ptest->face;
	//ptest->eyesize;
	strcpy(ptest->face, "wawa");
	ptest->eyesize = 80;
	printf("%s,%d\n", ptest->face, ptest->eyesize);

	printf("\n");
	system("pause");
	return 0;
}