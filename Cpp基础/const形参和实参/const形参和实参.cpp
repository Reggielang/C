#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

//�����޸��β�
int cube1(int i)
{
	i = 0;
	return i*i*i;
}

//�������޸��β�
int cube2(const int i)
{
	//i = 0;//�����޸�
	return i*i*i;
}

int pcube1(int *pi)
{
	*pi = 1;
	return *pi * (*pi) * (*pi);
}

//�ײ�const �����޸�pi�����ַ����������ͨ��*piȥ�޸������ַ��Ӧ��ֵ��ʵ�ο�����int����const int
int pcube2(const int *pi)
{
	//*pi = 1;
	return *pi * (*pi) * (*pi);
}

int pcube3(int * const pi)// ����ָ�룬�������pi�ĵ�ַ�ǳ��������޸ĵ�ַ��
//��������*piȥ���������ַ��Ӧ��ֵ������ ʵ��ֻ����int
{
	*pi = 1;
	return *pi * (*pi) * (*pi);
}

//�����޸�r��ֵ ʵ�ε�������int
int rcube1(int &r)
{
	r = 10;
	return r*r *r;

}

//�������޸�r //const��ǰ����Ժ��Ե� ����ʵ�ε����Ϳ�����int ��const int
int rcube2(const int &r)
{
	//r = 10;
	return r*r *r;

}


int main() {

	int num1 = 10;
	const int num2 = 10;
	//ʵ��Ϊint���ͻ���const int����
	cout << cube1(num1) << " " << cube1(num2) << endl;
	cout << pcube1(&num1)<<endl;
	cout << pcube2(&num1) << " " << pcube2(&num2) << endl;
	cout << pcube3(&num1) << endl;

	cout << rcube1(num1) << endl;
	cout << rcube2(num1) << " " << rcube2(num2) << endl;
	


	//ʵ��ֻ��Ϊint����
	//cout<< pcube1(&num2) << endl;
	//ʵ��ֻ��Ϊint����
	//cout << pcube3(&num2) << endl;
	//ʵ��ֻ��Ϊint����
	//cout << rcube1(num2) << endl;


	//ָ������ָ�룺���� ���ܸı���ָ�����ݵ�ָ�롣����ʱconst���Է���������ǰ�󶼿ɣ���int������˵��
	//����ʱ��const int��int const �ǵȼ۵ġ�����ָ������ָ��Ҳ���� �ײ�const
	int num_a = 1;
	int const  *p_a = &num_a; 
	//�ײ�const
	//*p_a = 2;  //����ָ�򡰳�������ָ�벻�ܸı���ָ�Ķ���

	//ָ�볣��������ָ�뱾���ǳ���������ʱ�����ʼ����֮�����洢�ĵ�ֵַ�Ͳ����ٸı䡣
	//����ʱconst�������ָ�����*���棬����*const ����������ָ����Ƕ���const
	int num_b = 2;
	int *const p_b = &num_b; 
	//����const
	//p_b = &num_a;  //���󣬳���ָ�벻�ܸı�洢�ĵ�ֵַ


	

	system("pause");
	return 0;
}

