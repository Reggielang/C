#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>


char *p_str()
{
	char str[100] = "hehe"; //ָ����4���ֽڣ� 4���ֽ� 100���ֽ������Ǹ�����ȫ�ֱ��������ݣ�������һ�ݵ�ջ��
	//�͵�ַ�޹�

	printf("str=%s\n", str);
	printf("str=%p\n", str);
	return str;
}



int main()
{
	char *p = NULL;
	p = p_str(); //�������֮���Զ����ٸú�����ջ�����ڴ�ռ䣬����hehe�Ҳ����ˡ�ֻ�����˵�ַ��û���κ����ݡ�
	//%s�Ǵ�ӡ��ַ��ָ���ڴ�ռ������
	printf("p=%p\n", p); //p������׵�ַ  p��ӡ�����ַ
	printf("p=%s\n", p); //%s��ӡ��ַ����Ӧ���ڴ�ռ������,��ջ���Ķ�Ӧ�������Ѿ���������,����������
	system("pause");
	return 0;
}