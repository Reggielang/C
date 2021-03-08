#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

//break 跳出当前循环
//goto 可用于跳出复杂循环
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