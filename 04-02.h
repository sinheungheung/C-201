#include<iostream> // cout,endl 사용
using namespace std;

class Integer {
public:
	Integer(void) {} // 매개변수 없는 생성자
	Integer(int v) : value(v) {} // 매개변수 있는 생성자
	Integer operator+(const Integer& rhs);
	void print();
private:
	int value;
};