#include "student.h"

//构造函数
Student::Student(string name, int chinese, int math, int english)
{
	name_ = name;
	chinese_ = chinese;
	math_ = math;
	english_ = english;
}
//定义默认的构造参数
Student::Student()
{
}

Student::~Student()
{
}

void Student::setStudent(string name,int chinese, int math,int english)
{
	name_ = name;
	chinese_ = chinese;
	math_ = math;
	english_ = english;
}

int Student::sum(Student & s)
{

	return s.chinese_+s.math_+s.english_;
}

float Student::avg(Student & s)
{
	//强制类型转换
	return (float)(s.chinese_+s.math_+s.english_)/3;
}

bool Student::pass(Student & s)
{
	if (s.chinese_ >= PassingScore && s.math_ >= PassingScore && s.english_ >= PassingScore)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void printMath(Student& s)
{
	cout <<"数学成绩为："<<s.math_<<endl;
}
