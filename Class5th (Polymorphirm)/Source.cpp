#include <iostream> 

using namespace std;

#pragma region 함수의 오버로딩

// 같은 이름의 함수를 매개변수의 자료형과 매개변수의 수로 구분하여 여러 개를 선언할 수 있는 기능.

void calculator(char x, char y)
{
	cout << "(char)x + (char)y = " << (char)(x + y) << endl;
}

void calculator(int x, int y)
{
	cout << "(int)x + (int)y = " << x + y << endl;
}

void calculator(float x, float y)
{
	cout << "(float)x + (float)y = " << x + y << endl;
}

void calculator(float x, float y, float z)
{
	cout << "(float)x + (float)y + (float)z = " << x + y + z << endl;
}

// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는 인수의 형태를 보고 호출하므로, 반환형으로 함수의 오버로딩을 생성할 수 있음.

#pragma endregion

#pragma region 함수의 오버라이딩

	// 상위 클래스의 있는 함수를 하위 클래스에서 재정의 하여 사용하는 기능.

class Unit
{
protected:
	int health;
public:
	void move()
	{
		cout << "Unit Move" << endl;
	}
};

class Marine : public Unit
{
public:
	void move()
	{
		cout << "Marine Move" << endl;

	}
};

class FireBet : public Unit
{
public:
	void move()
	{
		cout << "FireBet Move" << endl;
	}
};

// 함수의 오버라이딩은 상속 관계에서만 이루어 지며, 
// 하위 클래스에서 함수를 재정의할 때 상위 클래스의 함수 형태와 일치해야함.

#pragma endregion

#pragma region 가상함수

class Mechanic
{
protected:
	int health;
	int attack;
	int defense;
public:
	virtual void move()
	{
		cout << "Mechanic On" << endl;
	}
};

class Vulture : public Mechanic
{
public:
	Vulture()
	{
		health = 80;
		attack = 20;
		defense = 0;
	}
	virtual void move()
	{
		cout << "Vulture Move" << endl;
	}
};

class SigueTank : public Mechanic
{
public:
	SigueTank()
	{
		health = 150;
		attack = 30;
		defense = 1;
	}
	virtual void move()
	{
		cout << "SigueTank Move" << endl;
	}
};

class Goliath : public Mechanic
{
public:
	Goliath()
	{
		health = 125;
		attack = 12;
		defense = 1;
	}
	virtual void move()
	{
		cout << "Goliath Move" << endl;
	}
};
// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가 있을 때 객체 주소를 가상 함수 테이블을 추가함.

#pragma endregion

int main()
{

#pragma region 다형성

	// 여러 개의 서로 다른 객체가 동일한 기능을 서로 다른 방법으로 처리할 수 있는 작업.

#pragma region 함수의 오버로딩

	// calculator('0', '0');
	// calculator(10, 20);
	// calculator(57.5f, 82.5f);

#pragma endregion

#pragma region 함수의 오버라이딩

	// Unit unit;
	// unit.move();

	// Marine marine;
	// marine.move();

	// Unit  *creatptr = new Marine;

	// creatptr->move();

#pragma endregion

#pragma region 가상 함수

	// 상속하는 클래스 내에서 같은 형태의 함수로 재정의 될 수 있는 함수.

	// Mechanic* mechanicptr = new SigueTank;

	// cout << "SigueTank 오브젝트의 크기: " << sizeof(SigueTank) << endl;
	// 가상 함수 실행 시간에 상위 클래스에 대한 참조로 하위 클래스에 재정의된 함수를 호출 할 수 있으며, 접근 지정자는 공개로 설정해야함.

	// mechanicptr->move();

	// 가상 함수의 경우 가상 함수 테이블을 사용하여 호출되는 함수를 실행 시간에 결정하며, 정적으로 선언된 함수는 가상 함수로 선언할 수 없음.

#pragma endregion

#pragma region 가상 함수 테이블

	//	cout << "유닛을 선택하세요. 최대 5개까지 가능합니다." << endl;
	//	
	//	for (int a = 0; a < 5; a++)
	//	{
	//		cin >> a;
	//	
	//		if (a == 0)
	//		{
	//			Mechanic* ptr0 = new Vulture;
	//			ptr0->move();
	//		}
	//		else if (a == 1)
	//		{
	//			Mechanic* ptr1 = new SigueTank;
	//			ptr1->move();
	//		}
	//		else if(a == 2)
	//		{
	//			Mechanic* ptr2 = new Goliath;
	//			ptr2->move();
	//		}
	//		else if(a == 4)
	//		{
	//			cout << "대기열이 없습니다." << endl;
	//		}
	//	}

#pragma endregion

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을 하지 않고,
	// 실행 시간에 함수와 속성이 결정될 수 있는 동적 바인딩을 가능하게 함.

#pragma endregion

	return 0;
}

