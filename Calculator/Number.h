#include<iostream>
#include<string>
#include<stack>
#include<math.h>

using namespace std;

/* ���� "�����" */
class Number {
public:
	/* ������������ �� ����������� */
	Number();
	Number(string str);
	Number(string str, int bs);
	Number(double str, int bs);
	~Number();
	/* ������� */
	string get(int base);
private:
	/* ���� */
	string num;
	int base;
	/* ������� ����� */
	string fromDecimal(string number, int base, int length);
	string toDecimal(string number, int basis, int length);
};

