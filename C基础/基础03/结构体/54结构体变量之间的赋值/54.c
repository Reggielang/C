#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>


typedef struct ModelFace
{
	char face[10];
	int eyesize;

}ModelFace;

//����ṹ�岻�����ڴ�
//����������ʱ�ŻῪ�ٿռ�
int main()

{
	
	ModelFace m1 = { "baby",100 };
	//��ֵ���û�й�ϵ
	ModelFace m2 = m1; //���������ڴ�

	printf("m2=%s,m2=%d", m2.face, m2.eyesize);

	printf("\n");
	system("pause");
	return 0;
}