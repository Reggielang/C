#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{

	char str[] = "hehe";

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c", str[i]);
	//}


	printf("\n\n");

	for (char *pstr=&str; pstr < str+sizeof(str); pstr++)
	{
		printf("%c", *pstr);
	}

	printf("\n");
	system("pause");
	return 0;
}