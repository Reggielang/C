#pragma once

#ifndef DRUG_H_
#define DRUG_H_

#include<string>
#include<iostream>
using namespace std;
enum Type
{
	cover_HP,
	cover_MP,
};
class Drug
{
private:
	string name_;
	Type type_;
	int num_;
	float buy_price_;
	float sell_price_;
	static constexpr float ratio = 0.75;

public:
	Drug(string name, Type type, int num, float buy_price);
	Drug();

	void buyDrug(float& money, int num);

	void sellDrug(float& money, int num);

	void display();

	string show_enum();

	~Drug();
};


#endif // !DRUG_H_
