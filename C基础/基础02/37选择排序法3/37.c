#include<stdio.h>
#include<stdlib.h>


//10�����뵱�ϴ�
//�������뵱�ϴ���ֻ��Ҫ�����������������Ĵ�Ϳ�����
//ֻ�Ƚ�ѡ���������ֵ���洢�±꣬�ٺ�i�Ƚϣ�Ȼ���ٽ���
//��Ϊ�����ڴ�Ľ������ͻή�ͳ���������ٶ�
int main()
{
	//ֻ�Ƚϲ�����
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int kmax = 0;
	for (int  i = 0; i < 10-1; i++)
	{
		kmax = i;
		for (int  j = i+1; j < 10; j++)
		{
			if (a[kmax]<a[j])
			{
				//�洢���Ҵ���±꣬��ֱ�ӽ���
				kmax = j;
			}
		}

		if (kmax!=i)
		{
			int temp = a[i];
			a[i] = a[kmax];
			a[kmax] = temp;
		}
	}
	system("pause");
	return 0;
}