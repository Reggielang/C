#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

typedef struct ModelFace
{
	char face[10];
	int eyesize;

}ModelFace;

int main()

{
	//
	int a[3] = { 1,2,3 };
	int *pa = (int *)malloc(3 * sizeof(int));
	free(pa);

	//��ջ��������ָ�������ָ���ڶ����Ͽ��ٵĿռ䡣
	ModelFace *pm = (ModelFace *)malloc(3 * sizeof(ModelFace));


	for (int i = 0; i < 3; i++)
	{
		strcpy(pm[i].face, "hehe");
		pm[i].eyesize = 10 + i;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("��%d��,%s,%d\n", i, pm[i].face, pm[i].eyesize);
	}

	if (pm != NULL)
	{
		free(pm);
		pm = NULL;
	}

	
	printf("\n");
	system("pause");
	return 0;
}