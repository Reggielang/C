#include "Cuboid.h"
#include <iostream>
using namespace std;


int main()
{
	Cuboid c1(20, 11.5, 10.5);
	Cuboid c2(11.5, 10, 5);

	//对象数组
	Cuboid cs[2] = {};
	cs[0] = Cuboid(20, 11, 10);
	cs[1] = Cuboid(11, 22, 33);
	int res = cs[0].compare(cs[1]);

	//int res = c1.compare(c2);
	if (res==0)
	{
		cout << "第一个长方体大" << endl;
	}
	else if (res==1)
	{
		cout << "一样大" << endl;
	}
	else
	{
		cout << "第二个长方体大" << endl;
	}

	system("pause");
	return 0;
}