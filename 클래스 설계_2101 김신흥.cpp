#include<iostream>
using namespace std;

class Monster {
// �������
public:
	int JumpPower;
	int FightPower;
	int ScreamPower;

public:
	Monster(int JumpPower, int FightPower, int ScreamPower)
		:JumpPower(JumpPower), FightPower(FightPower), ScreamPower(ScreamPower){}

	// �޼ҵ�
	void WeakPower() {
		this->JumpPower;
	}
	
	void MiddlePower() {
		this->FightPower;
	}

	void StrongPower() {
		this->ScreamPower;
	}

	void win() {
		cout << "���� ���� ��: " << WeakPower << endl;
		cout << "�߰� ��: " << MiddlePower << endl;
		cout << "���� ���� ��: " << StrongPower << endl;
	}
};

class Princess : public Monster {

public:
	// ���ְ� ������ ������ �� �������ϴ� �ܰ� 
	int nervous; // ����
	int fear; // �η���
	int panic; // �ؽ��� ����

public:
	Princess(int nervous, int fear, int panic)
		:Monster(JumpPower, FightPower, ScreamPower), nervous(nervous), fear(fear), panic(panic) {}

	// ����ɶ� ������ �ѷ�����
	void arround()
	{
		this->nervous;
	}

	// �η��ﶧ �޸���
	void run()
	{
		this->fear;
	}

	// �ؽ��� �����϶� ����
	void hide()
	{
		this->panic;
	}
};
int main()
{
	// Princess ��ü ����
	Princess myPrincess = Princess(10, 50, 100); // �������� ������ ���ڷ� ��Ÿ�� ��

	// �޼��� ȣ��
	myPrincess.arround();
	myPrincess.run();
	myPrincess.hide();
	
	return 0;
}