#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string>
#include"game.h"

void inputGame(Game game[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "������ϲ������Ϸ���ƣ�";
		cin >> game[i].name;
		cout << "��������Ϸ�����֣�";
		cin >> game[i].socre;
	}
}


void sort(Game game[], int size)
{
	Game temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (game[j].socre>game[i].socre)
			{
				temp = game[i];
				game[i] = game[j];
				game[j] = temp;
			}

		}
	}


}

void display(Game game[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ":" << game[i].name << "----" << game[i].socre << endl;
	}
}