#include"Drug.h"

int main()
{
	const int size = 2;
	Drug drugs[size];
	drugs[0] = Drug("回血药水", cover_HP, 20, 100);
	drugs[1] = Drug("回魔药水", cover_MP, 10, 150);
	float money = 1000;
	
	cout << "1.购买回血药水 / 2.购买回魔药水 / 3.卖出回血药水 / 4.卖出回魔药水 / 5.显示剩余药水和金额 / 6.退出" << endl;
	cout << "请输入操作" << endl;
	int input;
	int number;
	while (cin>>input&&input >0 && input <=6)
	{
		if (input ==1)
		{
			cout << "请输入购买的数量：" << endl;
			cin >> number;
			if (number>0)
			{
				drugs[0].buyDrug(money,number);
				cout << "请继续输入操作" << endl;
			}
		}
		else if (input == 2)
		{
			cout << "请输入购买的数量：" << endl;
			cin >> number;
			if (number > 0)
			{
				drugs[1].buyDrug(money, number);
				cout << "请继续输入操作" << endl;
			}
		}
		else if (input == 3) 
		{
			cout << "请输入卖出的数量：" << endl;
			cin >> number;
			if (number > 0)
			{
				drugs[0].sellDrug(money, number);
				cout << "请继续输入操作" << endl;
			}
		}
		else if (input == 4)
		{
			cout << "请输入卖出的数量：" << endl;
			cin >> number;
			if (number > 0)
			{
				drugs[1].sellDrug(money, number);
				cout << "请继续输入操作" << endl;
			}
		}
		else if (input == 5) 
		{
			cout << "目前拥有的药品：" << endl;
			for (int  i = 0; i < size; i++)
			{
				cout << i + 1 << ":  " ;
				drugs[i].display();
			}
			cout << "金钱：" << money << endl;
			cout << "请继续输入操作" << endl;
		}
		else 
		{
			cout << "你退出了本次操作" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}