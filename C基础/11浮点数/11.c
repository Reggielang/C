#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main()
{
	float a = 10.1f; //float有效位数是6-7位

	double b = 10.0;//默认是15-16位

	long double c = 10.00;


	//12.3e3 = 12.3*10^3 e代表基数10 3代表3次方
	//1.2345e+002= 1.2345* 10的正2次方	

	printf("%d,%d",sizeof(float), sizeof(double));
	system("pause");
}