#include<iostream> //cout,endl 사용
#include<string>

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;
	

public:
	// 생성자: 객체가 생성되면 자동으로 호출되는 함수
	// 반환형을 갖고있지 않는다
	Student();

	void show();
	
};


Student::Student()
{
	
		nHakbun = 1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다." << endl;
	
}
void Student::show()
{
	// 멤버함수
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "학번은 " << sName << "입니다" << endl;
}
int main(void)
{
	
	Student stu;
	stu.show();
	
}
