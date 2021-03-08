#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//#pragma  预编译
//linker 链接
//DOS窗口--DOS指令模式
//以windows模式去编译--"/subsystem:\"windows\"/entry:\"mainCRTStartup\""

//隐藏程序的黑窗口
#pragma comment(linker,"/subsystem:\"windows\" /entry:\"mainCRTStartup\"")

int main()
{
	MessageBoxA(0,"你的电脑已被锁定","系统提示你!",0);
	
	//system("pause");
	return 0;
}