#include <iostream>
#include <string>
#include <map>

using namespace std;

void main(void) {
	map<string, string> IBW;	
	IBW["�쿵��"] = "������";
	IBW["����"] = "���⿵";
	IBW["�ǹο�"] = "������";
	IBW["����ȣ"] = "���¿�";

	// vector�� ��� ���� ���(�ݺ���)
	for (auto iter = IBW.begin(); iter != IBW.end(); iter++)
		cout << iter->first << "�� " << iter->second << "��" << endl;

	cout << "����� ���ΰ��� " << IBW["�쿵��"] << endl;

}