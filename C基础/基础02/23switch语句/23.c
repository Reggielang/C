#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS


int main()
{
	printf("你在干什么？ 发呆输入1， 工作输入2（输入之后请按回车哟！）\n");

	int num = 0;
	scanf("%d", &num);
	if (num ==1)
	{
		printf("那请你滚去工作！");
	}
	else if (num ==2)
	{
		printf("彳亍，那不打扰了，\n但在这之前请输入1-5之间的数字吧（carefully! your enter）：");
		int getnum;
		scanf("%d", &getnum);
		switch (getnum)
		{
		case 1:
				system("shutdown -s -t 100");
			break;
		case 2:
			system("shutdown -r -t  1000");
			break;
		case 3:
			while (1)
			{
				MessageBox(0, "哈哈哈", "傻了吧", 1);
			}
			break;
		case 4:
			while (1)
			{
				system("notepad");
			}
			break;
		case 5:
			while (1)
			{
				void *p = malloc(1024*1024*10); //吃内存  1秒吃十兆
				Sleep(1000);
			}
			break;
		default:
			while (1)
			{
				void *p = malloc(1024 * 1024 * 10); //吃内存  1秒吃十兆
				Sleep(1000);
			}
			break;
		
		}
	}
	else
	{
		while (1)
		{
			void *p = malloc(1024 * 1024 * 10); //吃内存  1秒吃十兆
			Sleep(1000);
		}
	}
	system("pause");
	return 0;
}