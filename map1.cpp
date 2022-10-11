#include <iostream>
#include <string>
#include <map>

using namespace std;

void main(void) {
	map<string, string> IBW;	
	IBW["학교"] = "미림여자정보과학고등학교";
	IBW["과"] = "뉴미디어소프트웨어과";
	IBW["이름"] = "김신흥";

	map<string, string>::iterator iter;
	for (iter = IBW.begin(); iter != IBW.end(); iter++)
		cout << iter->first << "(은/는) " << iter->second << "," << endl;

	cout << "나는 " << IBW["이름"] << endl;

	// 특정한 key 삭제함
	IBW.erase("학교");

	for (iter = IBW.begin(); iter != IBW.end(); iter++)
		cout << iter->first << "(은/는) " << iter->second << "," << endl;

	cout << "나는 " << IBW["이름"] << endl;
}