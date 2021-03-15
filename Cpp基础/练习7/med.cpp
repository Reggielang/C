#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include"med.h"


//使用引用类型来作为参数传递，因为需要修改结构体本身的值。
void buyMed(Med &m, float &money,int num)
{
	if (money>=m.buy_price*num)
	{
		money -= m.buy_price*num;
		m.num += num;
		cout << "购买成功！" << endl;
	}
	else
	{
		cout << "购买失败，钱不够买" << num << "个药物" << endl;
	}
}

void sellMed(Med &m,float &money,int num) 
{
	if (m.num>=num)
	{
		m.num -= num;
		money += m.sell_price*num;
		cout << "卖出成功！" << endl;
	}
	else
	{
		cout << "没有这么多" << num << "的药物可以卖出" << endl;
	}
}


void display(Med &d1, Med &d2, float money)
{
	cout << "目前拥有药物：" << endl;
	cout << "1:" << d1.name << "  数量：" << d1.num << "  种类:" << show_enum(d1)
		<< "  购入价格：" << d1.buy_price << "  卖出价格：" << d1.sell_price << endl;

	cout << "2:" << d2.name << "  数量：" << d2.num << "  种类:" << show_enum(d2)
		<< "  购入价格：" << d2.buy_price << "  卖出价格：" << d2.sell_price << endl;

	cout << "拥有金额：" << money << endl;
}


//枚举返回字符串
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