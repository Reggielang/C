#include<stdio.h>
#include<stdlib.h>


int main2()
{
	char feng = 'A';
	int *p = &feng; //�õ��˵�ַ�Ϳ��������޸��ڴ��е�����

	*p = 'B';

	feng = 'C';
	printf("%c\n", feng);
	printf("%p\n", &feng);
	printf("%p\n", p);
	printf("%p\n", &p); //ָ������ĵ�ַ

	//�ڿ͵��˰���ĺţ� ���˵��˺ڿ͵ĺţ� �ܲ���ͨ���ڿ͵ĺ��ҵ�����ĺ� ���Ե�
	//ͨ���ڿ͵�ID���İ�����������Եģ��洢ָ������ĵ�ַֻ���Ƕ���ָ��
	printf("%c\n", feng);
	printf("%c\n", *p);
	system("pause");
}