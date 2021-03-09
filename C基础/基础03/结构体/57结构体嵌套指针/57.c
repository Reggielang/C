#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//结构体声明时不会开辟空间
typedef struct ModelFace
{
	//如果结构体内部有指针，能否直接给指针拷贝东西
	//char face[10];
	char *face;
	int eyesize;

}ModelFace;

int main()

{
	char* name = NULL;
	name = (char*)malloc(10);
	strcpy(name,"hehe");
	printf("%s\n", name);

	if (name!=NULL)
	{
		free(name);
		name = NULL;
	}
	
	ModelFace m1;
	m1.face = (char*)malloc(10);
	strcpy(m1.face, "baby");
	m1.eyesize = 100;
	printf("%s,%d\n", m1.face, m1.eyesize);


	if (m1.face != NULL)
	{
		free(m1.face);
		m1.face = NULL;
	}

	printf("\n");
	system("pause");
	return 0;
}