#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	//int sum = 0;
	//for (int i = 0; i <= 100; i++)
	//{
	//	sum += i;
	//}
	//printf("%d", sum);

	for (int  i = 0; i <= 3; i++)
	{
		//��һ������������˭�򿪵�0 ����ϵͳ��
		//�ڶ���open��ָ��
		//��������ָ����ַ
		//���ĸ��͵����Ĭ����0
		//�������Ĭ�ϵ�0
		//��ַ�ǵü���ת���ַ�
		ShellExecuteA(0, "open", "\"D:\\words\\WeChat\\WeChat.exe\"", 0,0,2);

	}
	system("pause");
	return 0;
}