#include<iostream> // cout,endl ���
using namespace std;

class Point
{
private:
	 int mX;
	 int mY;
public:
	Point(int _x,int _y);
	void print(void);
};
// ������ ����:�ʱ�ȭ 
Point::Point(int _x, int _y):mX(_x),mY(_y){}

void Point::print(void)
{
	cout <<"("<< mX << ", "<<mY <<")"<<endl;
}
//{
//	mX = _x;
//	mY = _y;
//};
int main(void)
{
	Point p1(1, 2);
	p1.print();
	return 0;
}
