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
			cout << "购买成功！" << endl;
		}
		else
		{
			cout << "所剩金额不足够"<<num<<"个药物" << endl;
		}
	}
	else
	{
		cout << "请输入正确的数字" << endl;
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
			cout << "卖出成功！" << endl;
		}
		else
		{
			cout << "你没有这么多的药品可以卖出" << endl;
		}
	}
}

void Drug::display()
{
	cout << "药物名称：" << name_ << "  数量：" << num_ << "  种类：" << type_
		<< "  买入价格：" << buy_price_ << "  卖出价格：" << sell_price_ << endl;
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

