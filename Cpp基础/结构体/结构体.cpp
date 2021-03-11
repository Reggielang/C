#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

//定义结构体-放在外面整个文件都可以使用
//放在函数里，只能在某个函数使用

struct Position {
	float x;
	float y;
	float z;
};


//多类型结构体
struct Hero {
	string name;
	int hp;
	int attck;
	Position pos;
};



int main()
{
	//结构体赋值
	//Position playpos = {3,4,5};
	Position playpos{ 3,4,5 };
	//Position playpos{  };
	cout << playpos.x << playpos.y << playpos.z << endl;

	playpos.y = 100;
	cout << playpos.y << endl;

	//多个敌人
	//Position enemypos;
	Position enemypos[] = { {1,1,1},{3,4,5},{6,7,8} };
	cout << enemypos[1].x << endl;





	system("pause");
	return 0;
}