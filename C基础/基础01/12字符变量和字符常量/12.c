#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void main2()
{
	char a = 'a'; //字符类型单引号 //窄字符
	printf("%d,%d", sizeof(a),sizeof('a'));
	//兼容性 
	wchar_t b = "啊"; //宽字符
	//a是变量，'a'是字符常量，字符变量和字符常量长度不一样
	//裤子170， 180‘a’的值，裤子长度好比变量a //断腿穿裤子
	printf("%d",sizeof("A"));//双引号 字符串默认带有‘\0’，字符串默认至少会有一个字节 
	//字符变量 字符串变量  字符常量

	//一个汉字占两个字节
	printf("%d", sizeof("啊"));
	system("pause");

}

void main()
{
	system("color 5f");
	system("title 呵呵老师");
	system("pause");
}
