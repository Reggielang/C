#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//�ṹ������ʱ���Ὺ�ٿռ�
typedef struct ModelFace
{
	//����ṹ���ڲ���ָ�룬�ܷ�ֱ�Ӹ�ָ�뿽������
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