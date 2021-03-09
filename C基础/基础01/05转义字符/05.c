#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//转义字符

// \n--换行符  \t--水平制表 \\--输出一个反斜杠     \0--空字符   \a响铃
//'\0' 是字符串的结束符，任何字符串之后都会自动加上'\0'。如果字符串末尾少了‘\0’转义字符，则其在输出时可能会出现乱码问题。

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