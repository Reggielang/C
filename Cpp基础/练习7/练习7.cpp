#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include"med.h"

	

int main() {
	
	//�������ֲ�ͬ��ҩˮ
	Med hpMed = { "��Ѫҩˮ", cover_HP, 10, 150, sell_price(hpMed) };
	Med mpMed = { "��ħҩˮ", cover_MP, 20, 100, sell_price(mpMed) };

	//���ó�ʼ�Ľ�Ǯ
	float money = 1000;
	cout << "1.�����Ѫҩˮ / 2. �����ħҩˮ / 3. ������Ѫҩˮ / 4.������ħҩˮ / 5.��ʾĿǰӵ�е�ҩˮ�ͽ�Ǯ / 6.�˳�" << endl;
	cout << "�����������" << endl;
	int input;
	int num;
	while (cin>>input&&input>0&&input<=6)
	{
		if (input == 1)
		{
			cout << "�����빺��������" << endl;
			if (cin>>num&&num>0)
			{
				buyMed(hpMed,money,num);
				cout << "������ɣ�������������" << endl;
			}
			else
			{
				cout << "�������������֣�" << endl;
			}
		}
		else if (input == 2)
		{
			cout << "�����빺��������" << endl;
			if (cin >> num&&num>0)
			{
				buyMed(mpMed, money, num);
				cout << "������ɣ�������������" << endl;
			}
			else
			{
				cout << "�������������֣�" << endl;
			}
		}
		else if (input == 3)
		{
			cout << "����������������" << endl;
			if (cin >> num&&num>0)
			{
				sellMed(hpMed, money, num);
				cout << "������ɣ�������������" << endl;
			}
			else
			{
				cout << "�������������֣�" << endl;
			}
		}
		else if (input == 4)
		{
			cout << "����������������" << endl;
			if (cin >> num&&num>0)
			{
				sellMed(mpMed, money, num);
				cout << "������ɣ�������������" << endl;
			}
			else
			{
				cout << "�������������֣�" << endl;
			}
		}
		else if (input ==5)
		{
			display(hpMed, mpMed,money);
			cout << "�������������" << endl;
		}
		else
		{
			break;
		}

	}
	cout << "���˳����̳ǣ�" << endl;
	system("pause");
	return 0;
}