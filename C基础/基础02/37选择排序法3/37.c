#include<stdio.h>
#include<stdlib.h>


//10个人想当老大
//假设我想当老大，我只需要和你们里面最厉害的打就可以了
//只比较选出其中最大值，存储下标，再和i比较，然后再交换
//因为产生内存的交换，就会降低程序的运行速度
int main()
{
	//只比较不交换
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int kmax = 0;
	for (int  i = 0; i < 10-1; i++)
	{
		kmax = i;
		for (int  j = i+1; j < 10; j++)
		{
			if (a[kmax]<a[j])
			{
				//存储比我大的下标，不直接交换
				kmax = j;
			}
		}

		if (kmax!=i)
		{
			int temp = a[i];
			a[i] = a[kmax];
			a[kmax] = temp;
		}
	}
	system("pause");
	return 0;
}