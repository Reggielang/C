#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main() 
{
	//C���Է��
	char website[] = { 's','i','k','i' };//��Ϊû�н�β\0���Ի����һЩ����
	char website2[] = { 's','i','k','i','\0' };//���ַ�:\0���ַ�����\0��β��
	cout << website<<endl<<website2<<endl; 

	//strlen --ȡ���ַ�������
	char web[] = "sikiedu";
	cout << strlen(web) << endl;
	cout << web[3] << endl;

	//���������ַ���
	//char web2[20];
	//cin >> web2;
	//cout << web2 << endl;


	char str[] = "dadahtrkromrlotmltrbrl;kb;rtk;rt"
		"oeroerjgerlkkerfpflwepfw";//ƴ���ַ���

	//cin������ ���Կո��Ʊ�����س� ����������ġ�
	char name[30];
	char food[40];
	cout << "��������ǣ�"; 
	//cin >> name;
	cin.getline(name,30); //��ȡһ������

	cout << "��ϲ����ʳ�";
	//cin >> food;
	cin.getline(food, 40);

	cout << name << "ϲ����" << food;

	system("pause");
	return 0;
}

