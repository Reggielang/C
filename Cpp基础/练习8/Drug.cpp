#include "Drug.h"

Drug::Drug(string name, Type type, int num, float buy_price)
{
	name_ = name;
	type_ = type;
	num_ = num;
	buy_price_ = buy_price;
	sell_price_ = buy_price * ratio;
}

Drug::Drug()
{
}

void Drug::buyDrug(float& money, int num)
{
	if (num>0)
	{
		if (buy_price_*num <= money)
		{
			money -= buy_price_ * num;
			num_ += num;
			cout << "����ɹ���" << endl;
		}
		else
		{
			cout << "��ʣ���㹻"<<num<<"��ҩ��" << endl;
		}
	}
	else
	{
		cout << "��������ȷ������" << endl;
	}
}

void Drug::sellDrug(float& money, int num)
{
	if (num>0)
	{
		if (num <= num_)
		{
			num_ -= num;
			money += sell_price_ * num;
			cout << "�����ɹ���" << endl;
		}
		else
		{
			cout << "��û����ô���ҩƷ��������" << endl;
		}
	}
}

void Drug::display()
{
	cout << "ҩ�����ƣ�" << name_ << "  ������" << num_ << "  ���ࣺ" << type_
		<< "  ����۸�" << buy_price_ << "  �����۸�" << sell_price_ << endl;
}


string Drug::show_enum()
{
	if (type_==0)
	{
		return "Cover_HP";
	}
	else
	{
		return "Cover_MP";
	}
}

Drug::~Drug()
{
}

