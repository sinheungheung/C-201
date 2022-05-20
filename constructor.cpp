#include<iostream>
#include<string.h>
using namespace std;

class Person {
private:
	string sName;
	int nAge;
protected:
	int nAge;
public:
	Person();
	Person(string name, int age);
	void hi();
};
class Student :public Person {
private:
	int nHakbun;

public:
	Student(); // 생성자
	Student(string name, int age, int nHakbun); // 매개변수 넣은 생성자
	void study();
};

Student::Student() : Person() {
	nHakbun = 0;
}
Student::Student(string name, int age, int hakbun)
	:Person(name,age),nHakbun(hakbun){}

Person::Person() {
	sName = "익명";
	nAge = 0;
}
Person::Person(string name, int age) 
	:sName(name), nAge(age)	{
}

void Person::hi() {
	cout << "이름: " << sName;
	cout << "나이: " << nAge << endl;
}

void Student::study() {
	hi(); // hi함수 호출
	cout << "학번: " << nHakbun;
	nAge = 100;
}

int main() {
	Person p = Person();
	p.hi();

	Person* person = new Person("김신흥", 18);
	person->hi();

	// 객체 배열
	Person* people = new Person[5];
	people[0].hi();
	Student stu;
	// stu.nAge = 100;
	delete person;
	delete[] people;

	// 접근제어자
	class CBox {
	private:
		double width;
	};
	// get,set
	class ChilBox :CBox {
	public: 
		void setWidth(double w) {
		width = w;
		}
	};
}
// 163pg
// private: 다
// protected: 나
// public: 가
