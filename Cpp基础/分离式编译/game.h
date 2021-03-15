#pragma once
	
#ifndef Game_H_
#define Game_H_

#include<string>
using namespace std;

struct Game {
	string name;
	float socre;
};

void inputGame(Game game[], int size);


void sort(Game game[], int size);

void display(Game game[], int size);

const int Size = 5;
#endif // !Game_H_