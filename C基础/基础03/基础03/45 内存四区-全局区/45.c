#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

char *pMem1()
{
	//����ַ�������ô���ָ�����أ� ָ�������32λ�¶���4���ֽ�  ֻ����һ����ַ��ʵ���ַ���������ȫ����
	char *p1 = "hehe12345";
	return p1;
}

char *pMem2()
{
	//������ͬ�����ж�����һ����ͬ�ַ������ǵ�ַ�Ƿ�һ���أ� һ����ȫ������ͬ�ַ����������ϲ���
	char *p2 = "hehe12345";
	return p2;
}

int main()
{
	char *p1 = NULL;
	char *p2 = NULL;

	p1 = pMem1();
	p2 = pMem2();
	//%s--��ӡ��ַָ�������
	printf("p1=%s,p1=%p\n", p1, p1);
	printf("p2=%s,p2=%p\n", p2, p2);
	system("pause");
	return 0;
}