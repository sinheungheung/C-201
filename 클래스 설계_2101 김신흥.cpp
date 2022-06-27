#include<iostream>
using namespace std;

class Monster {
// 멤버변수
public:
	int JumpPower;
	int FightPower;
	int ScreamPower;

public:
	Monster(int JumpPower, int FightPower, int ScreamPower)
		:JumpPower(JumpPower), FightPower(FightPower), ScreamPower(ScreamPower){}

	// 메소드
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
		cout << "가장 약한 힘: " << WeakPower << endl;
		cout << "중간 힘: " << MiddlePower << endl;
		cout << "가장 강한 힘: " << StrongPower << endl;
	}
};

class Princess : public Monster {

public:
	// 공주가 괴물을 보았을 때 무서워하는 단계 
	int nervous; // 떨림
	int fear; // 두려움
	int panic; // 극심한 공포

public:
	Princess(int nervous, int fear, int panic)
		:Monster(JumpPower, FightPower, ScreamPower), nervous(nervous), fear(fear), panic(panic) {}

	// 긴장될때 주위를 둘러보기
	void arround()
	{
		this->nervous;
	}

	// 두려울때 달리기
	void run()
	{
		this->fear;
	}

	// 극심한 공포일땐 숨기
	void hide()
	{
		this->panic;
	}
};
int main()
{
	// Princess 객체 생성
	Princess myPrincess = Princess(10, 50, 100); // 무서움의 강도를 숫자로 나타낸 것

	// 메서드 호출
	myPrincess.arround();
	myPrincess.run();
	myPrincess.hide();
	
	return 0;
}