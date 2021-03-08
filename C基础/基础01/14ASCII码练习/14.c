#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


void main()
{
	char ch = getchar();
	if (ch<='F') //区间，定了一个区间
	{
		ch = ch - 17; //转化
	}
	putchar(ch);
}

void main()
{
	char ch[10] = { 'c','a','l','c' };
	system(ch);
	for (int  i = 0; i < 4; i++)
	{
		ch[i] = ch[i] - 30;

	}

	printf("%s", ch);
	system("pause");
}