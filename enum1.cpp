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
	cloth_store[Cloth::SKIRTS] = "ġ��";
	cloth_store[Cloth::PANTS] = "����";
	cloth_store[Cloth::SHIRTS] = "����";
	cloth_store[Cloth::HAT] = "����";
	cout << "�� ����" << endl;
	int choice = Cloth::HAT;
	switch (choice)
	{
	case Cloth::SKIRTS:

		cout << "ġ�� : ";
		break;
	case Cloth::PANTS:
		cout << "���� : ";
		break;
	case Cloth::SHIRTS:
		cout << "���� : ";
		break;
	case Cloth::HAT:
		cout << "���� : ";
		break;
	}
	cout << cloth_store[choice];
}