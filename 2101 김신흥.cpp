#include <string>
using namespace std;

class Monster
{
	// �޼ҵ�
public:
	void JumpPower();
	void  FightPower();
	void  ScreamPower();

	// �������
private:
	string name;
	int age;
};

class Person : public Monster
{
public:
	void ����();

private:
	int PersonSu;
};

class Pet : public Monster
{
public:
	void ¢��();
	void �޸���();
	void ����();

private:
	int PetSu;
};

class ��Ʃ�� : public Monster
{
public:
	void �������();
	void ���̺����ϱ�();

private:
	int �����;
};