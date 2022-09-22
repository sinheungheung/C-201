#include <iostream>
#include <string>

using namespace std;

template <typename S, typename T>
class Character {
public:
	Character(S _name, T _hp, T _offense, T _defense) 
		: name(_name), hp(_hp), offense(_offense), defense(_defense) {}
	void print(void)
	{
		cout << "�̸� " << name << endl;
		cout << "ü�� " << hp << endl;
		cout << "���� " << offense << endl;
		cout << "��� " << defense << endl;

	}
private:
	S name;
	T hp;
	T offense;
	T defense;
};

int main(void)
{	
	Character<string, int> juin("���ΰ�", 1, 10000, 999999);
	juin.print();

	return 0;
}
