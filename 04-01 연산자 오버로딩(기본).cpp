#include<iostream> // cout,endl ���
using namespace std;

class Point
{
private:
	int mX;
	int mY;
public:
	// ������
	Point(int _x, int _y);
	// �Ű������� ���� ������
	Point(void);

	// ������ �����ε�
	Point operator+(const Point& rhs);//right hand side: ������ ���

	void print(void);
};
// ������ ����:�ʱ�ȭ 
Point::Point(int _x, int _y) :mX(_x), mY(_y) {}
// �Ű����� ���� ������ ����
Point::Point(){}

void Point::print(void)
{
	cout <<"("<< mX << ", "<<mY <<")"<<endl;
}
//{
//	mX = _x;
//	mY = _y;
//};
Point Point::operator+(const Point& rhs)
{
	Point p; // �Ű����� ���� ������ �ʿ�
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}
int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);
	Point sum = p1.operator+(p2); // p1 + p2
	sum.print(); // (4,6)�� ���
	p1.print();
	return 0;
}
