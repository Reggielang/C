#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

/*接受用户输入，如果用户输入大写转化为小写，如果输入小写转化为大写。
如果是数字就原样输出。如果空格输出space。
*/

int main()
{
	while (1)
	{
		char data = getchar();
		if (data >= 'A'&& data <= 'Z')
		{
			printf("%c\n", data += 32);
		}
		else if (data >= 97 && data <= 122)
		{
			printf("%c\n", data -= 32);
		}
		else if (data >= 48 && data <= 57)
		{
			printf("%c\n", data);
		}
		else if (data == 32)
		{
			printf("This is spacekey");
		}	
	}
	system("pause");
}
