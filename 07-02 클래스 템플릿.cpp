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
		cout << "이름 " << name << endl;
		cout << "체력 " << hp << endl;
		cout << "공격 " << offense << endl;
		cout << "방어 " << defense << endl;

	}
private:
	S name;
	T hp;
	T offense;
	T defense;
};

int main(void)
{	
	Character<string, int> juin("주인공", 1, 10000, 999999);
	juin.print();

	return 0;
}
