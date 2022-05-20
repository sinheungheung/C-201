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
	Student(); // ������
	Student(string name, int age, int nHakbun); // �Ű����� ���� ������
	void study();
};

Student::Student() : Person() {
	nHakbun = 0;
}
Student::Student(string name, int age, int hakbun)
	:Person(name,age),nHakbun(hakbun){}

Person::Person() {
	sName = "�͸�";
	nAge = 0;
}
Person::Person(string name, int age) 
	:sName(name), nAge(age)	{
}

void Person::hi() {
	cout << "�̸�: " << sName;
	cout << "����: " << nAge << endl;
}

void Student::study() {
	hi(); // hi�Լ� ȣ��
	cout << "�й�: " << nHakbun;
	nAge = 100;
}

int main() {
	Person p = Person();
	p.hi();

	Person* person = new Person("�����", 18);
	person->hi();

	// ��ü �迭
	Person* people = new Person[5];
	people[0].hi();
	Student stu;
	// stu.nAge = 100;
	delete person;
	delete[] people;

	// ����������
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
// private: ��
// protected: ��
// public: ��
