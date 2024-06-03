﻿#include <iostream> 

using namespace std;

void Position(int x, int y = 20, int z = 30)
{
	cout << "x의 값은 :" << x << endl;
	cout << "y의 값은 :" << y << endl;
	cout << "z의 값은 :" << z << endl;

	// 기본 매개변수는 왼쪽에서부터 값이 들어가기 때문에 오른쪽에서 부터 매개변수를 지정해줘야함.

}

class Character
{
private:
	int coin = 30000;
	friend class Bank;
public:
	void Show()
	{
		cout << "coin :" << coin << endl;
	}
};

class Bank
{
private:
	int money;
public:
	void Keep(Character& character, int value)
	{
		character.coin -= value;
		money += value;
	}
};

int main()
{

#pragma region 기본 매개변수

	// 함수를 선언할 때 매개변수를 선언과 동시에 초기화 해놓으며, 
	// 함수를 호출할 때 매개변수를 지정하지 않아도 기본값으로 설정됨. 

	// Position(10);

#pragma endregion

#pragma region Friend

	// 접근 제한자의 영향을 받지 않고 외부에서도 private 변수와 protected 맴버에 접근을 허용하는 키워드.

	// Bank bank;

	// Character character;

	// bank.Keep(character, 10000);

	// character.Show();

#pragma endregion

#pragma region Solid 설계 원칙

#pragma region 단일 체계 원칙

	// 객체는 단 하나의 책임만 가져야하는 원칙.

#pragma endregion

#pragma region 개방 폐쇄 원칙

	// 클래스의 확장에 대해 열려있어야 하며, 수정에 대해서는 닫혀있어야하는 원칙.

#pragma endregion

#pragma region 인터페이스 분리 원칙

	// 클라이언트가 자신이 이용하지 않는 함수에 의존하지 않아야하는 원칙.

#pragma endregion

#pragma region 리스코프 치환 원칙

	// 상위 클래스의 객체와 하위 클래스의 객체가 있을 때, 
	// 상위 클래스의 객체를 호출하는 동작에서 하위 클래스가 상위 클래스를 완벽하게 대체할 수 있어야하는 원칙.

#pragma endregion

#pragma region 의존 역전 원칙

	// 의존 관계를 맺을 때 변화하기 쉬운 것보다 변화하기 어려운 것에 의존하라는 원칙.

#pragma endregion

#pragma endregion

	return 0;
}

