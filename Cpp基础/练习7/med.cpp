#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include"med.h"


//ʹ��������������Ϊ�������ݣ���Ϊ��Ҫ�޸Ľṹ�屾���ֵ��
void buyMed(Med &m, float &money,int num)
{
	if (money>=m.buy_price*num)
	{
		money -= m.buy_price*num;
		m.num += num;
		cout << "����ɹ���" << endl;
	}
	else
	{
		cout << "����ʧ�ܣ�Ǯ������" << num << "��ҩ��" << endl;
	}
}

void sellMed(Med &m,float &money,int num) 
{
	if (m.num>=num)
	{
		m.num -= num;
		money += m.sell_price*num;
		cout << "�����ɹ���" << endl;
	}
	else
	{
		cout << "û����ô��" << num << "��ҩ���������" << endl;
	}
}


void display(Med &d1, Med &d2, float money)
{
	cout << "Ŀǰӵ��ҩ�" << endl;
	cout << "1:" << d1.name << "  ������" << d1.num << "  ����:" << show_enum(d1)
		<< "  ����۸�" << d1.buy_price << "  �����۸�" << d1.sell_price << endl;

	cout << "2:" << d2.name << "  ������" << d2.num << "  ����:" << show_enum(d2)
		<< "  ����۸�" << d2.buy_price << "  �����۸�" << d2.sell_price << endl;

	cout << "ӵ�н�" << money << endl;
}


//ö�ٷ����ַ���
string show_enum(const Med &d) 
{
	switch (d.type)
	{
	case 0:
		return "cover_HP";
		break;
	case 1:
		return "cover_MP";
		break;
	default:
		break;
	}
}