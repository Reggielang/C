#include<stdio.h>
#include<stdlib.h>

int main() 
{
	//内存是由按顺序编号的一系列存储单元组成的，在内存中，每个存储单元都由唯一的地址
	//通过地址可以方便的内存单元中存储信息。在计算机中，一切信息都以二进制数据的形式体现
	//每个内存单元的容量是1B，即8bit（8个0，1二进制位）

	//a其实是地址的别名
	int a = 10;
	printf("%p\n", &a);


	printf("%d\n", a);
	system("pause");
	return 0;
}