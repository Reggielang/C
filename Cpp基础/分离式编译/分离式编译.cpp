#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include"game.h"




int main()
{
	cout << "������5����ϲ������Ϸ���ƺ�����" << endl;
	Game game[Size] = {};
	inputGame(game, Size);
	sort(game,Size);
	display(game, Size);
	system("pause");
	return 0;
}