#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main()
{
	//强制类型转换 大的转小的
	double a = 3.14; //8个字节 
	//printf不会执行自动类型转换
	printf("%d", (int)a); //(你想转换的类型)（可以是变量也可以是表达式）
	
	//第二种
	double b = 3.1415;
	int c = b; //b是八个字节，c是四个字节 当声明一个变量的时候，变量的空间就已经决定了。
	printf("\n%d", c);


	char e = 'a'; //char 类型转int 把字符转换为ASCII码来进行运算
	int f = e;

	printf("\n%d", f);

	//练习 计算 3.14+5.18*2.15的值以整数输出
	// 计算10+20.9+10.1+11 以小数形式输出
	// 20*50+111.0+200.500+3.42 以小数形式输出，但保留3位小数。

	int x = 3.14 + 5.18 * 2.15;
	float y = 10 + 20.9 + 10.1 + 11;
	float z = 20 * 50 + 111.0 + 200.500 + 3.42;

	printf("\n%d,%f,%.3f", x, y,z);
	system("pause");
}