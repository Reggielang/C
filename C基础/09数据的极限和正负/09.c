#include<stdio.h>
#include<stdlib.h>
	
void main()
{
	int num_max = INT_MAX;
	int num_min = INT_MIN;

	printf("%d,%d\n", num_max, num_min);

	unsigned char ch = 255+1;
	printf("Ҧ��������ǣ�%d", ch);//���ݵ�������뽨�������ݵļ��޷�Χ�ڣ�
	system("pause");
}