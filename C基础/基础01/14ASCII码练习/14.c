#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


void main()
{
	char ch = getchar();
	if (ch<='F') //���䣬����һ������
	{
		ch = ch - 17; //ת��
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