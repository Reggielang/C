#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

int main1()
{
	//gotoһ�㿪������ʹ��-- �ڿ������ע������
	//��ʵʵ��һ��СĿ�꣬һ����ż�ð������������������
A:	printf("�Ǻ���ʦ���˧");

	goto A;

	system("pause");
	return 0;
}
int main()
{
	int i = 0;
	A:	if (i<5)
		{
		system("notepad");
		i++;
		goto A;
		system("pause");
		//ͨ�����ַ�ʽҲ����ʵ��ѭ��
	}
}