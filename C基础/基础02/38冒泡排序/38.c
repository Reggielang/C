#include<stdio.h>
#include<stdlib.h>


int main()
{
	//冒泡排序法求极值
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };

	for (int i = 0; i < 10-1; i++) //数组的下标从0开始，到9，所以是10-1
	{
		if (a[i]>a[i+1])
		{
			int temp = a[i + 1];
			a[i + 1] = a[i];
			a[i]= temp;
		}
	}
	printf("%d", a[9]);

	system("pause");
	return 0;

}