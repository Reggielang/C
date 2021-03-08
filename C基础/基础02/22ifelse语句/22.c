#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main()
{
	printf("我是马赛克！\n");
	printf("如果爱我你输入1，如果不爱你输入2，如果无所谓就666");

	int num=0;
	scanf_s("%d", num);
	if (num==1)
	{
		printf("你在干什么");
	}
	else if (num==666)
	{
		printf("洗洗睡");
	}
	else if (num==2)
	{
		while (1)
		{
			MessageBox(0, "接受惩罚吧", "这就是后果",1);
		}
	}
	system("pause");
}