#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//二分查找法
//void FindMax(int b[], int num)
//{
//	int l = 0;
//	int r = 100000 - 1;
//
//	int nul = -1;
//	while (l<=r)
//	{
//		int mid = (l + r) / 2;
//		if (num ==b[mid])
//		{
//			printf("在数组中找到了%d", num);
//			nul++;
//			break; //找到数之后应该要跳出循环
//		}
//		else if (num>b[mid]) //如果想要查找的数大于中间值，那么就舍弃掉中间值前面的数
//		{
//			l = mid + 1;
//		}
//		else  //如果想要查找的数小于中间值，那么就舍弃掉中间值后面的数
//		{
//			r = mid - 1;
//		}	
//	}
//	if (nul == -1)
//	{
//		printf("没有在该数组中找到对应的数");
//	}
//}
//二分查找法
void FindNum(int a[], int data)
{
	int tou = 0;
	int wei = 100000 - 1;
	int flag = -2;
	int time = 0;
	while (tou <= wei)
	{
		int zhong = (tou + wei) / 2;
		printf("tou=%d,wei=%d,zhong=%d,time=%d\n", tou, wei, zhong,++time);
		if (data==a[zhong])
		{
			printf("找到了值为%d的数了", data);
			flag = 1;
			break;
		}
		else if (data>a[zhong]) //如果想查找的值大于中间值的话，那中间值之前的数全部舍弃掉
		{
			tou = zhong + 1;
		}
		else 
		{
			wei = zhong - 1; //如果想查找的值小于中间值，中间值之后的数全部舍弃掉
		}
	}
	if (flag==-2) //未在数组中找到对应的数
	{
		printf("未找到对应的值\n");
	}
}


int main()
{
	int a[100000] = { 0 };
	for (int i = 0; i < 100000; i++)
	{
		a[i] = i;
		printf("i=%d\n", i);
	}

	int data;
	scanf("%d", &data);
	FindNum(a, data);
	//FindMax(b, data);

	system("pause");
	return 0;
}