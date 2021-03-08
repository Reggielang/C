#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	//int sum = 0;
	//for (int i = 0; i <= 100; i++)
	//{
	//	sum += i;
	//}
	//printf("%d", sum);

	for (int  i = 0; i <= 3; i++)
	{
		//第一个参数代表是谁打开的0 代表系统打开
		//第二个open是指令
		//第三个是指令或地址
		//第四个和第五个默认是0
		//第五个是默认的0
		//地址记得加上转义字符
		ShellExecuteA(0, "open", "\"D:\\words\\WeChat\\WeChat.exe\"", 0,0,2);

	}
	system("pause");
	return 0;
}