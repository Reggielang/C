#include<stdio.h>
#include<stdlib.h>

int main()
{
	//��ο����㷨�ĳ���
	//1.������ �жϺ�ѭ������
	//2. ����� ÿ�����Ĺ���
	//3. ����
	//4. ����
	//5. ģ�¸�

	//ѡ��������ֵ
	int a[10] = { 9,2,3,4,5,6,7,1,8,0 };

	int max = a[0];

	//��while����дѡ��������ֵ
	int i = 0;
	while (i<10)
	{
		if (max<a[i])
		{
			max = a[i];
		}
		i++;	
	}
	
	
	//for (int i = 0; i < 10; i++)
	//{

	//	if (max<a[i])
	//	{
	//		max = a[i];
	//	}				
	//}

	printf("%d", max);

	system("pause");
	return 0;
}