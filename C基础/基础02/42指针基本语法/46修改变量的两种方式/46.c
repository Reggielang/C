#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	//��������һ�������ڴ�ռ�ı���
	//�������ͣ��ǹ̶��ڴ��С�ı���
	//ֱ��ͨ���������޸ı���
	int a = 10;
	a = 1;
	printf("a=%d\n", a);

	//���ͨ����ַ�޸ı���
	int *p = &a; //������ַ���������֤��
	printf("p=%p,&a=%p\n", p, &a); 
	*p = 100;
	printf("a=%d\n", a);
	printf("\n");
	system("pause");
	return 0;

}