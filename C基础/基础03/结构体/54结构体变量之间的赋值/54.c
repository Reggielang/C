#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>


typedef struct ModelFace
{
	char face[10];
	int eyesize;

}ModelFace;

//定义结构体不开辟内存
//在声明变量时才会开辟空间
int main()

{
	
	ModelFace m1 = { "baby",100 };
	//赋值完成没有关系
	ModelFace m2 = m1; //拷贝的是内存

	printf("m2=%s,m2=%d", m2.face, m2.eyesize);

	printf("\n");
	system("pause");
	return 0;
}