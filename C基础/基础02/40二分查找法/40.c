#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//���ֲ��ҷ�
//void FindMax(int b[], int num)
//{
//	int l = 0;
//	int r = 100000 - 1;
//
//	int nul = -1;
//	while (l<=r)
//	{
//		int mid = (l + r) / 2;
//		if (num ==b[mid])
//		{
//			printf("���������ҵ���%d", num);
//			nul++;
//			break; //�ҵ���֮��Ӧ��Ҫ����ѭ��
//		}
//		else if (num>b[mid]) //�����Ҫ���ҵ��������м�ֵ����ô���������м�ֵǰ�����
//		{
//			l = mid + 1;
//		}
//		else  //�����Ҫ���ҵ���С���м�ֵ����ô���������м�ֵ�������
//		{
//			r = mid - 1;
//		}	
//	}
//	if (nul == -1)
//	{
//		printf("û���ڸ��������ҵ���Ӧ����");
//	}
//}
//���ֲ��ҷ�
void FindNum(int a[], int data)
{
	int tou = 0;
	int wei = 100000 - 1;
	int flag = -2;
	int time = 0;
	while (tou <= wei)
	{
		int zhong = (tou + wei) / 2;
		printf("tou=%d,wei=%d,zhong=%d,time=%d\n", tou, wei, zhong,++time);
		if (data==a[zhong])
		{
			printf("�ҵ���ֵΪ%d������", data);
			flag = 1;
			break;
		}
		else if (data>a[zhong]) //�������ҵ�ֵ�����м�ֵ�Ļ������м�ֵ֮ǰ����ȫ��������
		{
			tou = zhong + 1;
		}
		else 
		{
			wei = zhong - 1; //�������ҵ�ֵС���м�ֵ���м�ֵ֮�����ȫ��������
		}
	}
	if (flag==-2) //δ���������ҵ���Ӧ����
	{
		printf("δ�ҵ���Ӧ��ֵ\n");
	}
}


int main()
{
	int a[100000] = { 0 };
	for (int i = 0; i < 100000; i++)
	{
		a[i] = i;
		printf("i=%d\n", i);
	}

	int data;
	scanf("%d", &data);
	FindNum(a, data);
	//FindMax(b, data);

	system("pause");
	return 0;
}