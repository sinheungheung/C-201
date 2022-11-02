#include <iostream>
#include <string>

using namespace std;

enum Cloth {
	SKIRTS,
	PANTS,
	SHIRTS,
	HAT,
	COUNT
};

void main(void)
{
	string cloth_store[Cloth::COUNT];
	cloth_store[Cloth::SKIRTS] = "Ä¡¸¶";
	cloth_store[Cloth::PANTS] = "¹ÙÁö";
	cloth_store[Cloth::SHIRTS] = "¼ÅÃ÷";
	cloth_store[Cloth::HAT] = "¸ðÀÚ";
	cout << "¿Ê ¼±ÅÃ" << endl;
	int choice = Cloth::HAT;
	switch (choice)
	{
	case Cloth::SKIRTS:

		cout << "Ä¡¸¶ : ";
		break;
	case Cloth::PANTS:
		cout << "¹ÙÁö : ";
		break;
	case Cloth::SHIRTS:
		cout << "¼ÅÃ÷ : ";
		break;
	case Cloth::HAT:
		cout << "¸ðÀÚ : ";
		break;
	}
	cout << cloth_store[choice];
}