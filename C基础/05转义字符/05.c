#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//转义字符

// \n--换行符  \t--水平制表 \\--输出一个反斜杠     \0--空字符   \a响铃

void main()
{


	printf("\a");

	printf("\n");

	Sleep(2000);//等待2秒--Windows.h
	printf("\n");
	Sleep(2000);
	printf("\t");
	

	system("pause");
}