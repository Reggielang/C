#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main()
{
	float a = 10.1f; //float��Чλ����6-7λ

	double b = 10.0;//Ĭ����15-16λ

	long double c = 10.00;


	//12.3e3 = 12.3*10^3 e�������10 3����3�η�
	//1.2345e+002= 1.2345* 10����2�η�	

	printf("%d,%d",sizeof(float), sizeof(double));
	system("pause");
}