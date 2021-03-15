#pragma once
#ifndef STUDENT_H_
#define STUDENT_H_

#include<iostream>
#include<string>

using namespace std;
//类的定义
class Student 
{
	//Student类的友元函数 -但不属于这个类的函数成员
	friend void printMath(Student& s);
	//私有成员，一般定义数据成员，只能通过共有接口进行访问
private:
	string name_;
	int chinese_;
	int math_;
	int english_;

	//作用域为类的常量可以用static关键字
	static const int PassingScore = 60;

		
	//共有接口
public:
	//构造函数
	Student(string name, int chinese, int math, int english);

	Student();

	//析构函数 析构函数没有参数，返回值，和声明类型
	~Student();

	void setStudent(string name, int chinese, int math, int english);
	int sum(Student &s);
	float avg(Student &s);
	bool pass(Student &s);
};


#endif // !STUDENT_H_
