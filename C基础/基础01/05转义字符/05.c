#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//ת���ַ�

// \n--���з�  \t--ˮƽ�Ʊ� \\--���һ����б��     \0--���ַ�   \a����
//'\0' ���ַ����Ľ��������κ��ַ���֮�󶼻��Զ�����'\0'������ַ���ĩβ���ˡ�\0��ת���ַ������������ʱ���ܻ�����������⡣

void main()
{


	printf("\a");

	printf("\n");

	Sleep(2000);//�ȴ�2��--Windows.h
	printf("\n");
	Sleep(2000);
	printf("\t");
	

	system("pause");
}