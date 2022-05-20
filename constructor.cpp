#include<iostream>
#include<string.h>
using namespace std;

class Person {
private:
	string sName;
	int nAge;
public:
	Person();
	Person(string name, int age);
	void hi();
};

Person::Person() {
	sName = "ÀÍ¸í";
	nAge = 0;
}


Person::Person(string name, int age) 
	:sName(name), nAge(age)	{
}

void Person::hi() {
	cout << "ÀÌ¸§: " << sName
		 << "³ªÀÌ: " << nAge << endl;
}

int main() {
	Person p = Person();
	p.hi();

	Person* person = new Person("±è½ÅÈï", 18);
	person->hi();

	// °´Ã¼ ¹è¿­
	Person* people = new Person[5];
	people[0].hi();

	delete person;
	delete[] people;
}