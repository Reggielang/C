#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

//break ������ǰѭ��
//goto ��������������ѭ��
int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 5)
			{
				goto A;
			}
			printf("%3d%3d", i, j);
		}
		printf("\n");
	}
A:	system("pause");
	return 0;
}