#include <string>
using namespace std;

class Monster
{
	// 메소드
public:
	void JumpPower();
	void  FightPower();
	void  ScreamPower();

	// 멤버변수
private:
	string name;
	int age;
};

class Person : public Monster
{
public:
	void 놀라다();

private:
	int PersonSu;
};

class Pet : public Monster
{
public:
	void 짖다();
	void 달리다();
	void 숨다();

private:
	int PetSu;
};

class 유튜버 : public Monster
{
public:
	void 사진찍기();
	void 라이브방송하기();

private:
	int 대담함;
};