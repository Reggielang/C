#include<stdio.h>
#include<stdlib.h>
	
void main()
{
	int num_max = INT_MAX;
	int num_min = INT_MIN;

	printf("%d,%d\n", num_max, num_min);

	unsigned char ch = 255+1;
	printf("姚明的身高是：%d", ch);//数据的运算必须建立在数据的极限范围内，
	system("pause");
}