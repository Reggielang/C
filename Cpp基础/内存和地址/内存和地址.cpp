#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

int main()
{
	////&ȡ��һ���������ڴ��ַ
	//int a = 10;
	//float b = 9.1f;
	//cout << &a << endl;
	//cout << &b << endl;

	////*���ڴ��ַ����Ӧ���ڴ�ȡ������
	//cout << *(&a) << endl;
	//cout << a << endl;

	////ָ���������ַ�ģ� //32λ����ָ����4�ֽڣ�  64����ָ����8���ֽ�
	//int *pa = &a;
	////cout << sizeof(pa);

	//cout << pa<<endl; //������ǵ�ַ��Ϊpa����ǵ�ַ

	//cout << *pa << endl; //*�Ǵ����ַ��Ӧ���ڴ��ϵ����ݣ� ����������ǵ�ַ��Ӧ��ֵ

	////ָ��ĳ��ò���
	//int c = 20;
	//int *p;
	//p = pa;

	//cout << *p << endl;
	//cout << *pa << endl;

	////ͨ��ָ�����޸�ֵ
	//*pa = 100;
	//cout << a << " " << *pa << endl;
	//*p = 300;
	//cout << a << " " << *p << endl;

	////��ָ��
	//int *p1=NULL;
	////Cpp ����Ŀ�ָ��
	//int *p2 = nullptr;
	//cout << p1 << p2<<endl;

	////�����͵�ָ�� --���Խ����������͵ĵ�ַ
	//void *p3;

	//p3 = &a;
	//cout << (int*)p3 << endl; //ʹ�õ�ʱ�����ת������Ӧ������

	//�¿���һ���ڴ�ռ�
	int *a = new int;
	*a = 100;
	cout << *a << endl;
	//���ٵ��ڴ�ռ�û����֮��Ҫ�ͷ�
	delete a;


	system("pause");
	return 0;
}