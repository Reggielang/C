#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//#pragma  Ԥ����
//linker ����
//DOS����--DOSָ��ģʽ
//��windowsģʽȥ����--"/subsystem:\"windows\"/entry:\"mainCRTStartup\""

//���س���ĺڴ���
#pragma comment(linker,"/subsystem:\"windows\" /entry:\"mainCRTStartup\"")

int main()
{
	MessageBoxA(0,"��ĵ����ѱ�����","ϵͳ��ʾ��!",0);
	
	//system("pause");
	return 0;
}