#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include"game.h"




int main()
{
	cout << "请输入5个你喜欢的游戏名称和评分" << endl;
	Game game[Size] = {};
	inputGame(game, Size);
	sort(game,Size);
	display(game, Size);
	system("pause");
	return 0;
}