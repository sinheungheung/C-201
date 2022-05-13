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
	Student(int Hakbun, string Name);

	void show();
	
};

Student::Student()
{
	    this->nHakbun = 1234;
		this->sName = "이사랑";
		cout << "일반생성자 생성." << endl;
}
// 멤버변수를 초기화 할 수 있으며 따라서,
// const형 변수와 참조형 변수를 멤버변수로 할 수 있다.
Student::Student(int Hakbun, string Name)
	: nHakbun(Hakbun), sName(Name) // 멤버변수(매개변수)
{
	cout << "일반생성자 생성." << endl;
	}

void Student::show()
{
	// 멤버함수
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "학번은 " << sName << "입니다" << endl << endl;
}
int main(void)
{	
	
	Student* stu2 = new Student[6];
	for (int i = 0; i < 6; i++)
		stu2[i].show(); 
	// 포인터지만 화살표(->)를 쓰면 에러가 난다
	// stu2[i]: *(stu2+i)이므로 이미 * 연산자가 있어 ->를 안쓴다
	delete []stu2;

	return 0;

}