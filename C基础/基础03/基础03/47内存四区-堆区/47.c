#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


char *phead()
{
	char *tmp = (char*)malloc(100); //malloc在堆区开辟了内存空间

	if (tmp==NULL)
	{
		return NULL;
	}
	//拷贝函数
	strcpy(tmp, "hehe"); //hehe\0，常量字符串存放到全局区，然后再复制到堆区上。 
	return tmp; //存的是堆区上字符串的地址
}

int main()
{
	char *p = NULL;
	p = phead(); //函数调用完毕，栈区内存空间销毁，但地址还在。//由于堆区上的内存空间内容还在，所以能打印hehe.

	if (p!=NULL)
	{
		printf("%s\n", p);
		free(p); //在堆区完开辟空间之后，要free，不是清空内存，而且解除这个指针和这块内存的对应关系。
		p = NULL; //然后让指针指向空
	}

	printf("\n");
	system("pause");
	return 0;
}