#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>


//�û����������Ϸ���Լ����ǵ����֣�С�����������մӴ�С��������֮�������

struct Game {
	string gamename;
	float gamemark;

};


int main()

{
	const int size = 5;
	Game game[size] = {};

	cout << "������5��ϲ������Ϸ�����ƣ��Լ�����������0-10֮�������С����"<<endl;
	for (int i = 0; i < size; i++)
	{
		cout << "��������Ϸ������:";
		cin >> game[i].gamename;
		cout << "�����������Ϸ�ķ���:";
		cin >> game[i].gamemark;
	}

	//����
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			Game temp;
			if (game[i].gamemark<game[j].gamemark)
			{
				temp = game[i];
				game[i] = game[j];
				game[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ":" << game[i].gamename << "--" << game[i].gamemark << endl;

	}

	system("pause");
	return 0;
}