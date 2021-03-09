#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


char *p_str()
{
	char str[100] = "hehe"; //指针是4个字节， 4个字节 100个字节数组是复制了全局变量的内容，拷贝了一份到栈区
	//和地址无关

	printf("str=%s\n", str);
	printf("str=%p\n", str);
	return str;
}



int main()
{
	char *p = NULL;
	p = p_str(); //函数完毕之后自动销毁该函数在栈区的内存空间，所以hehe找不到了。只留下了地址但没有任何内容。
	//%s是打印地址所指向内存空间的内容
	printf("p=%p\n", p); //p数组的首地址  p打印这个地址
	printf("p=%s\n", p); //%s打印地址所对应的内存空间的内容,但栈区的对应的内容已经被销毁了,所以是乱码
	system("pause");
	return 0;
}