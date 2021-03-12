#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>


//用户输入五个游戏名以及他们的评分（小数），并按照从大到小依次排序之后输出。

struct Game {
	string gamename;
	float gamemark;

};


int main()

{
	const int size = 5;
	Game game[size] = {};

	cout << "请输入5个喜欢的游戏的名称，以及给他们评分0-10之间的数（小数）"<<endl;
	for (int i = 0; i < size; i++)
	{
		cout << "请输入游戏的名称:";
		cin >> game[i].gamename;
		cout << "请输入这个游戏的分数:";
		cin >> game[i].gamemark;
	}

	//排序
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