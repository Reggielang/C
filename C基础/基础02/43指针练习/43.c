#include<stdio.h>
#include<stdlib.h>


int main2()
{
	char feng = 'A';
	int *p = &feng; //拿到了地址就可以任意修改内存中的内容

	*p = 'B';

	feng = 'C';
	printf("%c\n", feng);
	printf("%p\n", &feng);
	printf("%p\n", p);
	printf("%p\n", &p); //指针变量的地址

	//黑客盗了阿峰的号， 有人盗了黑客的号， 能不能通过黑客的号找到阿峰的号 可以的
	//通过黑客的ID更改阿峰的网名可以的，存储指针变量的地址只能是二级指针
	printf("%c\n", feng);
	printf("%c\n", *p);
	system("pause");
}