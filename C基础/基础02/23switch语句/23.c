#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS


int main()
{
	printf("���ڸ�ʲô�� ��������1�� ��������2������֮���밴�س�Ӵ����\n");

	int num = 0;
	scanf("%d", &num);
	if (num ==1)
	{
		printf("�������ȥ������");
	}
	else if (num ==2)
	{
		printf("��ء���ǲ������ˣ�\n������֮ǰ������1-5֮������ְɣ�carefully! your enter����");
		int getnum;
		scanf("%d", &getnum);
		switch (getnum)
		{
		case 1:
				system("shutdown -s -t 100");
			break;
		case 2:
			system("shutdown -r -t  1000");
			break;
		case 3:
			while (1)
			{
				MessageBox(0, "������", "ɵ�˰�", 1);
			}
			break;
		case 4:
			while (1)
			{
				system("notepad");
			}
			break;
		case 5:
			while (1)
			{
				void *p = malloc(1024*1024*10); //���ڴ�  1���ʮ��
				Sleep(1000);
			}
			break;
		default:
			while (1)
			{
				void *p = malloc(1024 * 1024 * 10); //���ڴ�  1���ʮ��
				Sleep(1000);
			}
			break;
		
		}
	}
	else
	{
		while (1)
		{
			void *p = malloc(1024 * 1024 * 10); //���ڴ�  1���ʮ��
			Sleep(1000);
		}
	}
	system("pause");
	return 0;
}