#include<stdio.h>
#include<stdlib.h>

void main()
{
	//ɱ���򿪵ļ��±�
	system("taskkill /f /im notepad.exe");
	system("pause");

	//ɱ���򿪵Ĺȸ������
	system("taskkill /f /im chrome.exe");
	system("pause");
}