#include<stdio.h>
#include<stdlib.h>

int main()
{
	//元素个数：3*5=15  3行5列 一行有5个元素

	//int a[3][5] = { 1,2,3 };
	//int a[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	int a[3][5] = { 0 };
	for (int  i = 0; i < 15; i++)
	{
		a[i / 5][i % 5] = i;
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("a=%d\n", a[i][j]);
		}
	}

	system("pause");
	return 0;
}