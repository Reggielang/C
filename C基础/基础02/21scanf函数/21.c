#include<stdio.h>
#include<stdlib.h>



int main()
{
//scanf通过键盘读取用户输入，放入变量中，记得参数一定是变量的地址&
//&用于取变量的地址！
	int a = 0;
	scanf("%d", &a);

	printf("%d", a);
	system("pause");
	return 0;
}