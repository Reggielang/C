#include<iostream>
#include <climits>
using  namespace std;

int main()
{
	//��������
	int level = 14;

	short a = 3;

	long long u = 1000;

	cout << SHRT_MAX<<endl; //endl ����

	short l = 100;

	//���岻ͬ�ı�����ռ�õ��ڴ�ռ䲻ͬ��


	//�ַ�����
	char str = 'c';
	cout << str<<endl;
	cout.put(str);


	char d = 97;

	//�������� 
	bool x = true; //�棬���ڣ���0
	bool y = false; //�� �����ڣ�0

	cout << x << endl;
	
	//����
	const int i = 100;

	//������
	//e��ʾ��
	// 3.4e9 = 3.4*10^9  �����-e���ǳ���10^9

	float z = 3.14f;

	double  h = 3.144;

	long double o = 21313.4;

	//+ - * / //���������

	int res = 13 % 5; // % ��C++�����߱���������

	int g = 10;
	float j = 2.0;
	int s = g / j;
	cout << s;




	int t;
	cin >> t;
	return 0;

}