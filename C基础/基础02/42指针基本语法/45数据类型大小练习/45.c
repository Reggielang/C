#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	int a = 10; //以a这个变量名所对应的内存中放了一个10
	int b[10]; //int类型的数组


	printf("sizeof(a):%d \n",sizeof(a)); //4个字节
	printf("sizeof(int *):%d \n",sizeof(int *));  //4个字节
	printf("sizeof(b):%d \n",sizeof(b)); //4*10 = 40个字节
	printf("sizeof(b[0]):%d \n",sizeof(b[0])); //一个元素是int 所以是4个字节
	printf("sizeof(*b):%d \n",sizeof(*b)); // 指针在32位都是4个字节! 64位是8字节
	system("pause");
	return 0;
}