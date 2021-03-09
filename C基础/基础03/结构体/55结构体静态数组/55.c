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
	//¿‡±»
	int a[3] = { 1,2,3 };
	ModelFace m1[3] = {"hehe1",100,"hehe2",100 ,"hehe3",100 };
	//ModelFace m1[3] = {{"hehe",100},{"hehe",100} ,{"hehe",100}};
	
	for (int i = 0; i < 3; i++)
	{
		printf("%s,%d\n", m1[i].face, m1[i].eyesize);
	}

	printf("\n");
	system("pause");
	return 0;
}