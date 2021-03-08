#include<stdio.h>
#include<stdlib.h>

void main()
{
	//杀掉打开的记事本
	system("taskkill /f /im notepad.exe");
	system("pause");

	//杀掉打开的谷歌浏览器
	system("taskkill /f /im chrome.exe");
	system("pause");
}