#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };

	int max = 0;
	//ѡ�����򷨣���סһ��λ�ò�����ֱ��ѭ����һ�����ֵ
	//�ñȴ���̨  1��������ȫ��������
	for (int  i = 0; i < 10-1; i++)
	{
		max = i;
		for (int j = i+1; j < 10; j++)
		{
			if (a[max]<a[j])
			{
				int temp=a[j];
				a[j] = a[max];
				a[max] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",a[i]);
	}
	system("pause");
	return 0;
}