#include<stdio.h>
#include<stdlib.h>


int main()
{
	//ð������
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
	for (int i = 0; i < 10-1; i++)
	{
		//iÿѭ��һ�ζ���ɸѡ��һ�����ֵ
		for (int j = 0; j < 10-1-i; j++)
		{
			if (a[j]>a[j+1])
			{
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}

		}

	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	system("pause");
	return 0;
}