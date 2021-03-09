#include<stdio.h>
#include<stdlib.h>


int main()
{
	//数组首元素的地址和数组是一致的！

	int a[] = { 1,2,3 };
	char bai[3] = { 'z','l','j' };
	printf("bai = %p,z=%p\n", &bai, &bai[0]);

	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };//告诉编译器分配了40个字节

	//array 是数组的首元素它是int类型  加1等于加了一个int型的变量
	//&array 是数组类型  加1就等于加了一个数组
	//虽然地址相同，但是加1后的值不同，类型不一样
	printf("\n");
	system("pause");
	return 0;
}