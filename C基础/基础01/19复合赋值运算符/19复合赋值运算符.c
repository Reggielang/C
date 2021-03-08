#include<stdio.h>
#include<stdlib.h>

int  main()
{
	int a = 5;
	a += 10;//a=a+10


	int x = 3;
	int b = x += x -= x * x; //9

	/*
	* x+=x-=9
	* x-=9   x=x-9 x = 3-9   x = -6
	* x+=-6  x= x+ (-6)  x = -12
	*/
	printf("%d", x);
	system("pause");
	return 0;

}
