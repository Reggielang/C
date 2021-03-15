#pragma once
#ifndef STUDENT_H_
#define STUDENT_H_

#include<iostream>
#include<string>

using namespace std;
//��Ķ���
class Student 
{
	//Student�����Ԫ���� -�������������ĺ�����Ա
	friend void printMath(Student& s);
	//˽�г�Ա��һ�㶨�����ݳ�Ա��ֻ��ͨ�����нӿڽ��з���
private:
	string name_;
	int chinese_;
	int math_;
	int english_;

	//������Ϊ��ĳ���������static�ؼ���
	static const int PassingScore = 60;

		
	//���нӿ�
public:
	//���캯��
	Student(string name, int chinese, int math, int english);

	Student();

	//�������� ��������û�в���������ֵ������������
	~Student();

	void setStudent(string name, int chinese, int math, int english);
	int sum(Student &s);
	float avg(Student &s);
	bool pass(Student &s);
};


#endif // !STUDENT_H_
