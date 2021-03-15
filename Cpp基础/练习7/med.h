#pragma once
#ifndef GAME_MENDS_
#define GAME_MENDS_
#include<string>
using namespace std;

//需要写一个函数来显示里面的字符而不是默认的数字
enum Type
{
	cover_HP,
	cover_MP,
};

struct Med
{
	string name;
	Type type;
	int num;
	float buy_price;
	float sell_price;
};

constexpr float sell_price(Med &d) { return 0.75 * d.buy_price; }

void buyMed(Med &m, float &money, int num);

void sellMed(Med &m, float &money, int num);

void display(Med &d1, Med &d2, float money);

string show_enum(const Med &d);






#endif // !GAME_MES_
