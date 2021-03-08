#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };

	int max = 0;
	//选择排序法：按住一个位置不动，直到循环出一个最大值
	//好比打擂台  1个挑你们全部轮流打
	for (int  i = 0; i < 10-1; i++)
	{
		max = i;
		for (int j = i+1; j < 10; j++)
		{
			if (a[max]<a[j])
			{
				int temp=a[j];
				a[j] = a[max];
				a[max] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",a[i]);
	}
	system("pause");
	return 0;
}