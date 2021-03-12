#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

//可以修改形参
int cube1(int i)
{
	i = 0;
	return i*i*i;
}

//不可以修改形参
int cube2(const int i)
{
	//i = 0;//不可修改
	return i*i*i;
}

int pcube1(int *pi)
{
	*pi = 1;
	return *pi * (*pi) * (*pi);
}

//底层const 可以修改pi这个地址，但不可以通过*pi去修改这个地址对应的值。实参可以是int或者const int
int pcube2(const int *pi)
{
	//*pi = 1;
	return *pi * (*pi) * (*pi);
}

int pcube3(int * const pi)// 常量指针，代表这个pi的地址是常量不可修改地址，
//但可以用*pi去访问这个地址对应的值！！！ 实参只能是int
{
	*pi = 1;
	return *pi * (*pi) * (*pi);
}

//可以修改r的值 实参的类型是int
int rcube1(int &r)
{
	r = 10;
	return r*r *r;

}

//不可以修改r //const在前面可以忽略掉 所以实参的类型可以是int ，const int
int rcube2(const int &r)
{
	//r = 10;
	return r*r *r;

}


int main() {

	int num1 = 10;
	const int num2 = 10;
	//实参为int类型或者const int类型
	cout << cube1(num1) << " " << cube1(num2) << endl;
	cout << pcube1(&num1)<<endl;
	cout << pcube2(&num1) << " " << pcube2(&num2) << endl;
	cout << pcube3(&num1) << endl;

	cout << rcube1(num1) << endl;
	cout << rcube2(num1) << " " << rcube2(num2) << endl;
	


	//实参只能为int类型
	//cout<< pcube1(&num2) << endl;
	//实参只能为int类型
	//cout << pcube3(&num2) << endl;
	//实参只能为int类型
	//cout << rcube1(num2) << endl;


	//指向常量的指针：代表 不能改变其指向内容的指针。声明时const可以放在类型名前后都可，拿int类型来说，
	//声明时：const int和int const 是等价的。声明指向常量的指针也就是 底层const
	int num_a = 1;
	int const  *p_a = &num_a; 
	//底层const
	//*p_a = 2;  //错误，指向“常量”的指针不能改变所指的对象

	//指针常量：代表指针本身是常量，声明时必须初始化，之后它存储的地址值就不能再改变。
	//声明时const必须放在指针符号*后面，即：*const 。声明常量指针就是顶层const
	int num_b = 2;
	int *const p_b = &num_b; 
	//顶层const
	//p_b = &num_a;  //错误，常量指针不能改变存储的地址值


	

	system("pause");
	return 0;
}

