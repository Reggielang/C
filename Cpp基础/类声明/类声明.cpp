#include "student.h"


int main() 
{
	//������������ʹ��
	//��ʾ��ʼ��
	Student stu1=Student("Sam",100,120,110);
	//��ʽ��ʼ��
	Student stu2("David",90,100,110);

	Student stu3;
	//string name1 = "Sam";
	//int chinese1 = 100;
	//int math1 = 120;
	//int english1 = 110;
	//stu1.setStudent(name1, chinese1, math1, english1);

	int total1 = stu1.sum(stu1);
	float avgsocre1 = stu1.avg(stu1);
	bool ispass1 = stu1.pass(stu1);
	cout << "��ѧ�����ܳɼ�Ϊ" << total1 << endl;
	cout << "ƽ���ɼ���" << avgsocre1 << endl;
	if (ispass1==true)
	{
		cout << "ͨ��" << endl;
	}
	else
	{
		cout << "ûͨ��" << endl;
	}



	printMath(stu1);


	system("pause");
	return 0;



}