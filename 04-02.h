#include<iostream> // cout,endl ���
using namespace std;

class Integer {
public:
	Integer(void) {} // �Ű����� ���� ������
	Integer(int v) : value(v) {} // �Ű����� �ִ� ������
	Integer operator+(const Integer& rhs);
	void print();
private:
	int value;
};