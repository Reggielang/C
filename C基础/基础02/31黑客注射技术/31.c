//�������͸�Ϊdll��̬���ļ�
//����windowͷ�ļ�
//����ؼ��� ����̬�ⲻ��Ҫmain������������Ҫ��ִ�оͱ����ṩһ���ӿڣ�
//��DLLinject��Ȼ��ע�����ǵ�dll�ļ����Լ��ļ��еĺ���
#include<Windows.h>

_declspec (dllexport)void he()
{
	MessageBoxA(0, "QT��ʾ����ĵ����ѱ�����", "QT", 0);
}