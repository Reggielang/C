#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a = 10;
	int *p = NULL;
	p = &a;
	*p = 100;

	char *pp = NULL;
	double *ppp = NULL;
	//ָ������Ĵ�С�Ƕ����أ� ָ������������洢��ַ�ġ�
	//ָ��������ʲô������32λ�����£�����4���ֽڣ�������64λ��8���ֽڡ�
	//ָ��Ĵ�С�ǹ̶��ģ�
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(pp));
	printf("%d\n", sizeof(ppp));
	system("pause");
	return 0;
}