#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define  _CRT_SECURE_NO_WARNINGS

/*�����û����룬����û������дת��ΪСд���������Сдת��Ϊ��д��
��������־�ԭ�����������ո����space��
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
