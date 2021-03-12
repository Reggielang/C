#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include<string>
#include<math.h>

int main()
{
	//？:
	//表达式1？表达式2：表达式3

	//if（表达式）{
	//表达式2
//}
	//else{
	//表达式3
//}
	int vip = 1;
	string res = vip == 1 ? "有优惠" : "正常价格";

	cout << res << endl;

	system("pause");
	return 0;


}