#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
	int a = 5;
	a++;//������ǰ++���Ǻ�++���Ǳ�������1
	printf("%d", a);

	//ǰ++  �ȸ�������1֮�󣬴����µ�ֵ���м���
	//��++ ���Ƚ��м��㣬Ȼ����������1

	int c = 10;
	int b = c++ + ++c * 3 + --c + c++; 
	printf("\n%d", b);
	system("pause");
}