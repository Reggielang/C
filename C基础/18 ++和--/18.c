#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
	int a = 5;
	a++;//无论是前++还是后++都是变量自增1
	printf("%d", a);

	//前++  先给变量加1之后，带着新的值进行计算
	//后++ 是先进行计算，然后变量自身加1

	int c = 10;
	int b = c++ + ++c * 3 + --c + c++; 
	printf("\n%d", b);
	system("pause");
}