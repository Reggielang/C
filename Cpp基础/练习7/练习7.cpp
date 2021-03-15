#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include"med.h"

	

int main() {
	
	//定义两种不同的药水
	Med hpMed = { "回血药水", cover_HP, 10, 150, sell_price(hpMed) };
	Med mpMed = { "回魔药水", cover_MP, 20, 100, sell_price(mpMed) };

	//设置初始的金钱
	float money = 1000;
	cout << "1.购买回血药水 / 2. 购买回魔药水 / 3. 卖出回血药水 / 4.卖出回魔药水 / 5.显示目前拥有的药水和金钱 / 6.退出" << endl;
	cout << "请输入操作：" << endl;
	int input;
	int num;
	while (cin>>input&&input>0&&input<=6)
	{
		if (input == 1)
		{
			cout << "请输入购买数量：" << endl;
			if (cin>>num&&num>0)
			{
				buyMed(hpMed,money,num);
				cout << "购买完成，请继续输入操作" << endl;
			}
			else
			{
				cout << "请输入合理的数字：" << endl;
			}
		}
		else if (input == 2)
		{
			cout << "请输入购买数量：" << endl;
			if (cin >> num&&num>0)
			{
				buyMed(mpMed, money, num);
				cout << "购买完成，请继续输入操作" << endl;
			}
			else
			{
				cout << "请输入合理的数字：" << endl;
			}
		}
		else if (input == 3)
		{
			cout << "请输入卖出数量：" << endl;
			if (cin >> num&&num>0)
			{
				sellMed(hpMed, money, num);
				cout << "卖出完成，请继续输入操作" << endl;
			}
			else
			{
				cout << "请输入合理的数字：" << endl;
			}
		}
		else if (input == 4)
		{
			cout << "请输入卖出数量：" << endl;
			if (cin >> num&&num>0)
			{
				sellMed(mpMed, money, num);
				cout << "卖出完成，请继续输入操作" << endl;
			}
			else
			{
				cout << "请输入合理的数字：" << endl;
			}
		}
		else if (input ==5)
		{
			display(hpMed, mpMed,money);
			cout << "请继续其他操作" << endl;
		}
		else
		{
			break;
		}

	}
	cout << "你退出了商城！" << endl;
	system("pause");
	return 0;
}