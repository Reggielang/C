#include<iostream>
#include <climits>
using  namespace std;

int main()
{
	//整数类型
	int level = 14;

	short a = 3;

	long long u = 1000;

	cout << SHRT_MAX<<endl; //endl 换行

	short l = 100;

	//定义不同的变量，占用的内存空间不同。


	//字符类型
	char str = 'c';
	cout << str<<endl;
	cout.put(str);


	char d = 97;

	//布尔类型 
	bool x = true; //真，存在，非0
	bool y = false; //假 不存在，0

	cout << x << endl;
	
	//常量
	const int i = 100;

	//浮点数
	//e表示法
	// 3.4e9 = 3.4*10^9  如果是-e就是除以10^9

	float z = 3.14f;

	double  h = 3.144;

	long double o = 21313.4;

	//+ - * / //算术运算符

	int res = 13 % 5; // % 在C++中两边必须是整数

	int g = 10;
	float j = 2.0;
	int s = g / j;
	cout << s;




	int t;
	cin >> t;
	return 0;

}