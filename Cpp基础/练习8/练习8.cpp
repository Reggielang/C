#include"Drug.h"

int main()
{
	const int size = 2;
	Drug drugs[size];
	drugs[0] = Drug("��Ѫҩˮ", cover_HP, 20, 100);
	drugs[1] = Drug("��ħҩˮ", cover_MP, 10, 150);
	float money = 1000;
	
	cout << "1.�����Ѫҩˮ / 2.�����ħҩˮ / 3.������Ѫҩˮ / 4.������ħҩˮ / 5.��ʾʣ��ҩˮ�ͽ�� / 6.�˳�" << endl;
	cout << "���������" << endl;
	int input;
	int number;
	while (cin>>input&&input >0 && input <=6)
	{
		if (input ==1)
		{
			cout << "�����빺���������" << endl;
			cin >> number;
			if (number>0)
			{
				drugs[0].buyDrug(money,number);
				cout << "������������" << endl;
			}
		}
		else if (input == 2)
		{
			cout << "�����빺���������" << endl;
			cin >> number;
			if (number > 0)
			{
				drugs[1].buyDrug(money, number);
				cout << "������������" << endl;
			}
		}
		else if (input == 3) 
		{
			cout << "������������������" << endl;
			cin >> number;
			if (number > 0)
			{
				drugs[0].sellDrug(money, number);
				cout << "������������" << endl;
			}
		}
		else if (input == 4)
		{
			cout << "������������������" << endl;
			cin >> number;
			if (number > 0)
			{
				drugs[1].sellDrug(money, number);
				cout << "������������" << endl;
			}
		}
		else if (input == 5) 
		{
			cout << "Ŀǰӵ�е�ҩƷ��" << endl;
			for (int  i = 0; i < size; i++)
			{
				cout << i + 1 << ":  " ;
				drugs[i].display();
			}
			cout << "��Ǯ��" << money << endl;
			cout << "������������" << endl;
		}
		else 
		{
			cout << "���˳��˱��β���" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}