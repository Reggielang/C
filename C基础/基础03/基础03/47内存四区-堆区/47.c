#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


char *phead()
{
	char *tmp = (char*)malloc(100); //malloc�ڶ����������ڴ�ռ�

	if (tmp==NULL)
	{
		return NULL;
	}
	//��������
	strcpy(tmp, "hehe"); //hehe\0�������ַ�����ŵ�ȫ������Ȼ���ٸ��Ƶ������ϡ� 
	return tmp; //����Ƕ������ַ����ĵ�ַ
}

int main()
{
	char *p = NULL;
	p = phead(); //����������ϣ�ջ���ڴ�ռ����٣�����ַ���ڡ�//���ڶ����ϵ��ڴ�ռ����ݻ��ڣ������ܴ�ӡhehe.

	if (p!=NULL)
	{
		printf("%s\n", p);
		free(p); //�ڶ����꿪�ٿռ�֮��Ҫfree����������ڴ棬���ҽ�����ָ�������ڴ�Ķ�Ӧ��ϵ��
		p = NULL; //Ȼ����ָ��ָ���
	}

	printf("\n");
	system("pause");
	return 0;
}