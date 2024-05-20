#include <iostream> 

using namespace std;

#pragma region 순수 가상 함수

// 선언만 있고, 구현은 없는 가상 함수.

class Unit
{
protected:
	int health;
public:
	Unit()
	{
		cout << "Creat Unit" << endl;
	}

	virtual void skill() = 0;

	virtual ~Unit()
	{
		cout << "Release Unit" << endl;
	}
};

class Marine : public Unit
{
public:
	Marine()
	{
		cout << "Create Marine" << endl;
	}

	virtual void skill() override
	{
		cout << "Steam Pack" << endl;
	}

	~Marine()
	{
		cout << "Release Marine" << endl;
	}
};

class Ghost : public Unit
{
public:
	Ghost()
	{
		cout << "Create Ghost" << endl;
	}

	virtual void skill() override
	{
		cout << "Lock Down" << endl;
	}

	~Ghost()
	{
		cout << "Release Ghost" << endl;
	}
};
#pragma endregion


int main()
{

#pragma region 추상 클래스

	// 순수 가상 함수를 하나라도 가지고 있는 클래스 이며, 추상 클래스는 객체로 생성할 수 없음.

	// Marine marine;

	// Ghost ghost;
	// ghost.skill();

	// Unit* ptr = new Marine;
	// ptr->skill();

#pragma endregion

#pragma region 가상 소멸자

	// 객체가 소멸될 때 현재 참조하고 있는 객체와 상관없이 모두 호출되는 소멸자.

	Unit* createpointer = new Marine;

	delete createpointer;

	// 상속된 객체가 해제될 때 하위 클래스의 소멸자가 먼저 실행되고, 
	// 상위 클래스의 소멸자가 실행 되어야 하기 때문에 실행 시간에 메모리에 할당된 객체를 확인하고 차례대로 소멸시켜야함.

#pragma endregion

	return 0;
}

