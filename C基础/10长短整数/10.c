#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main2()
{
	int a1 = 10;
	int a2 = 010; //�˽���
	int a3 = 0x10; //ʮ������

	int a4 = 10u; //�޷�������
	int a5 = 10l; //������
	int a6 = 10ll; //long long����


}

void main() 
{
	int a1 = 1;
	short int a2 = 2;
	long int a3 = 3;
	printf("%d,%d,%d\n", sizeof(int), sizeof(short int), sizeof(long int));

	short int amax = SHRT_MAX;
	short int amin = SHRT_MIN;

	printf("%d,%d", amax, amin);

	//long int ����
	system("pause");
	long int bmax = LONG_MAX;
	long int bmin = LONG_MIN;

	printf("%d,%d", bmax, bmin);

}