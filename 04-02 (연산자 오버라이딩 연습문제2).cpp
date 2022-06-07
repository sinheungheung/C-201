#include<iostream> // cout,endl ���
using namespace std;

class Integer {
public:
	Integer(void){} // �Ű����� ���� ������
	Integer(int v) : value(v) {} // �Ű����� �ִ� ������
	Integer operator+(const Integer& rhs);
	void print();
private:
	int value;
};

int main(void)
{
	Integer a(1);
	Integer b(2);
	Integer c = a + b;
	c.print(); // 3�� ��µǵ���

	return 0;
}
void Integer::print()
{
	cout << value << endl;
}
Integer Integer:: operator+(const Integer& rhs)
{
	Integer temp;
	temp.value = value + rhs.value;
	return temp;
}
