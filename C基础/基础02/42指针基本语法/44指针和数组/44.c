#include<stdio.h>
#include<stdlib.h>


int main()
{
	//������Ԫ�صĵ�ַ��������һ�µģ�

	int a[] = { 1,2,3 };
	char bai[3] = { 'z','l','j' };
	printf("bai = %p,z=%p\n", &bai, &bai[0]);

	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };//���߱�����������40���ֽ�

	//array ���������Ԫ������int����  ��1���ڼ���һ��int�͵ı���
	//&array ����������  ��1�͵��ڼ���һ������
	//��Ȼ��ַ��ͬ�����Ǽ�1���ֵ��ͬ�����Ͳ�һ��
	printf("\n");
	system("pause");
	return 0;
}