#include <iostream>
#include <string>
#include <map>

using namespace std;

void main(void) {
	map<string, string> IBW;	
	IBW["�б�"] = "�̸������������а���б�";
	IBW["��"] = "���̵�����Ʈ�����";
	IBW["�̸�"] = "�����";

	map<string, string>::iterator iter;
	for (iter = IBW.begin(); iter != IBW.end(); iter++)
		cout << iter->first << "(��/��) " << iter->second << "," << endl;

	cout << "���� " << IBW["�̸�"] << endl;

	// Ư���� key ������
	IBW.erase("�б�");

	for (iter = IBW.begin(); iter != IBW.end(); iter++)
		cout << iter->first << "(��/��) " << iter->second << "," << endl;

	cout << "���� " << IBW["�̸�"] << endl;
}