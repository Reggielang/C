#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main()
{
	printf("���������ˣ�\n");
	printf("�������������1���������������2���������ν��666");

	int num=0;
	scanf_s("%d", num);
	if (num==1)
	{
		printf("���ڸ�ʲô");
	}
	else if (num==666)
	{
		printf("ϴϴ˯");
	}
	else if (num==2)
	{
		while (1)
		{
			MessageBox(0, "���ܳͷ���", "����Ǻ��",1);
		}
	}
	system("pause");
}