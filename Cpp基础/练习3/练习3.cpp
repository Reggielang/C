#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

int main()
{
	//��ϰ1
	//int i;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << i<<endl;
	//}

	////��ϰ2 --�ᱨ��
	//int j;
	//for (int j = 0; j < 11; j+=3)
	//{
	//	cout << j;
	//}
	//cout<< j << endl;


	////��ϰ3

	//int a = 5;
	//while (++a<9)
	//{
	//	cout << a++ << endl;
	//}

	////��ϰ4
	//int k = 8;
	//do
	//{
	//	cout << "k=" << k << endl;
	//} while (k++<5);


	////��ϰ5 --��ӡ1 2 4 8 16 32 64 ��forѭ��

	//int x = 0;
	//for (int i = 0; i < 7; i++)
	//{
	//	cout << pow(2,i) << endl;
	//}
	//int i = 1;
	//for (int i = 1;i <=64; i*2)
	//{
	//	cout << i << endl;
	//}


	//��ϰ6 --�û����������������������������֮�䣨����������������������������
	int num1;
	cout << "�������һ�����֣�";

	cin >> num1;
		int num2;
	cout << "������ڶ������֣�";
	cin >> num2;
	int total=0;
	for (int i = num1; i <= num2; i++)
	{
		 total += i;
	}
	cout << total << endl;

	////��ϰ7 --�û����Գ����������֣�ÿ������֮�󣬱��浱ǰ�������������ĺ͡����û�����0��ʱ����������
	//cout << "���������֣�" << endl;
	//float input;
	//float sum=0;

	//while (1)
	//{
	//	cin >> input;
	//	sum += input;
	//	cout << "��ǰ������ĺ�Ϊ" << sum << endl;
	//	if (input == 0)
	//		break;
	//}

	system("pause");
	return 0;
}