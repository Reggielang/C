#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	int a = 10; //��a�������������Ӧ���ڴ��з���һ��10
	int b[10]; //int���͵�����


	printf("sizeof(a):%d \n",sizeof(a)); //4���ֽ�
	printf("sizeof(int *):%d \n",sizeof(int *));  //4���ֽ�
	printf("sizeof(b):%d \n",sizeof(b)); //4*10 = 40���ֽ�
	printf("sizeof(b[0]):%d \n",sizeof(b[0])); //һ��Ԫ����int ������4���ֽ�
	printf("sizeof(*b):%d \n",sizeof(*b)); // ָ����32λ����4���ֽ�! 64λ��8�ֽ�
	system("pause");
	return 0;
}