#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>

//����ṹ��-�������������ļ�������ʹ��
//���ں����ֻ����ĳ������ʹ��

struct Position {
	float x;
	float y;
	float z;
};


//�����ͽṹ��
struct Hero {
	string name;
	int hp;
	int attck;
	Position pos;
};



int main()
{
	//�ṹ�帳ֵ
	//Position playpos = {3,4,5};
	Position playpos{ 3,4,5 };
	//Position playpos{  };
	cout << playpos.x << playpos.y << playpos.z << endl;

	playpos.y = 100;
	cout << playpos.y << endl;

	//�������
	//Position enemypos;
	Position enemypos[] = { {1,1,1},{3,4,5},{6,7,8} };
	cout << enemypos[1].x << endl;





	system("pause");
	return 0;
}