#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	//ָ������Ͳ����������˲�����Ҳ�����˽�����ʽ
	//������ָ���1��1���ǲ��� ָ������;�������ǰ�߼����ֽ�
	int num = 10;
	int *p = &num;  //ָ����32λ������ 4���ֽ�

	printf("%p,%p\n", p, p + 1);//ָ���1�Ǽ���һ��ָ����ָ�����͵Ĵ�С, ������4�ֽ�+4�ֽ� 
	

	char str = 'h';
	char *pstr = &str;
	//pstr+sizeof(*pstr)*1
	printf("%p,%p\n", pstr, pstr + 1); //ʵ�ʵ�ַ����1����Ϊchar���ʹ�С��1.
	printf("\n");
	system("pause");
	return 0;
}