#include<stdio.h>
#include<stdlib.h>


int main() 
{
	//注意C语言中没有bool类型，但有真假的概念 真用1 假用0表示
	//以非0代表真，以0代表假

	//int a = 140;
	//int b = 230;

	//while (a<b)
	//{
	//	printf("good boy!\n");
	//}
	

	//逻辑运算符--与：&& 必须两个表达式都为真才能返回true
	//或：|| 两个表达式满足一个就可以返回true 两个表达式都是false才能返回false
	//非： ！ 
	int body = 80;
	int face = 70;

	if (body>80 && face >80)
	{
		printf("理想中的情况");
	}
	else
	{
		printf("这是不可能的");
	}

	while (!5)
	{
		printf("多帅哦！");
	}
	// int a =3, b=4,c=5  下列表达式不为1的是
	//a||b+c&&b-c 3||9&&-1 &&优先级高所以返回1
	//!(a>b)&&!c||1   这个返回1
	//!(a+b)+c-1&&b+c/2  这个也返回1




	system("pause");
	return 0;


}
