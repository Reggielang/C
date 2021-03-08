#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

/*
100元去买100只鸡，公鸡5元一只，母鸡3元一只，小鸡3毛一只
100元分别能买公鸡母鸡小鸡各多少只
公鸡是x母鸡是y,小鸡是z
x+y+z =100
5x+3y+0.3z=100
穷举法！！！
20  33  300(但只能买100只)所以z 是100
*/

int main()
{
	//for (int x = 0; x <=20; x++)
	//{
	//	for (int  y = 0; y <= 33; y++)
	//	{
	//		for (int  z = 0; z <= 100; z++)
	//		{
	//			if ((5*x+3*y+z/3.0==100)&&(x+y+z==100))
	//			{
	//				printf("公鸡=%d,母鸡=%d,小鸡=%d\n", x, y, z);
	//			}
	//		}
	//	}
	//}

	//性能优化 100-x-y =z 也就是知道了x,y，也就知道了z
	for (int x = 0; x <=20; x++)
	{
		for (int  y = 0; y <= 33; y++)
		{
			int z = 100 - x - y;
			if (5*x+3*y+z/3.0==100)
			{
				printf("公鸡=%d,母鸡=%d,小鸡=%d\n", x, y, z);
			}
		}
	}




	system("pause");
	return 0;
}
