#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

/*
100Ԫȥ��100ֻ��������5Ԫһֻ��ĸ��3Ԫһֻ��С��3ëһֻ
100Ԫ�ֱ����򹫼�ĸ��С��������ֻ
������xĸ����y,С����z
x+y+z =100
5x+3y+0.3z=100
��ٷ�������
20  33  300(��ֻ����100ֻ)����z ��100
*/

int main()
{
	//for (int x = 0; x <=20; x++)
	//{
	//	for (int  y = 0; y <= 33; y++)
	//	{
	//		for (int  z = 0; z <= 100; z++)
	//		{
	//			if ((5*x+3*y+z/3.0==100)&&(x+y+z==100))
	//			{
	//				printf("����=%d,ĸ��=%d,С��=%d\n", x, y, z);
	//			}
	//		}
	//	}
	//}

	//�����Ż� 100-x-y =z Ҳ����֪����x,y��Ҳ��֪����z
	for (int x = 0; x <=20; x++)
	{
		for (int  y = 0; y <= 33; y++)
		{
			int z = 100 - x - y;
			if (5*x+3*y+z/3.0==100)
			{
				printf("����=%d,ĸ��=%d,С��=%d\n", x, y, z);
			}
		}
	}




	system("pause");
	return 0;
}
