#include<stdio.h>
#include<stdlib.h>

int main()
{
	//如何看懂算法的程序
	//1.看流程 判断和循环条件
	//2. 搞清楚 每个语句的功能
	//3. 试数
	//4. 调试
	//5. 模仿改

	//选择排序法求极值
	int a[10] = { 9,2,3,4,5,6,7,1,8,0 };

	int max = a[0];

	//用while语句改写选择排序法求极值
	int i = 0;
	while (i<10)
	{
		if (max<a[i])
		{
			max = a[i];
		}
		i++;	
	}
	
	
	//for (int i = 0; i < 10; i++)
	//{

	//	if (max<a[i])
	//	{
	//		max = a[i];
	//	}				
	//}

	printf("%d", max);

	system("pause");
	return 0;
}