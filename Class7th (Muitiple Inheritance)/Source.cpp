#include <iostream>
#include "Computer.h"

using namespace std;

class Food
{
public:
	Food()
	{
		cout << "Food In" << endl;
	}
	~Food()
	{
		cout << "Food Out" << endl;
	}
};

class Meat : public virtual Food
{
public:
	Meat()
	{
		cout << "Meat In" << endl;
	}
	~Meat()
	{
		cout << "Meat Out" << endl;
	}
};

class Vegetable : public virtual Food
{
public:
	Vegetable()
	{
		cout << "Vegetable In" << endl;
	}
	~Vegetable()
	{
		cout << "Vegetable Out" << endl;
	}
};

class Hambuger : public  Meat, public Vegetable
{
public:
	Hambuger()
	{
		cout << "Hambuger In" << endl;
	}
	~Hambuger()
	{
		cout << "Hambuger Out" << endl;
	}
};

int main()
{
   
#pragma region 다중 상속

	// 하나의 하위 클래스가 여러 개의 상위 클래스를 상속받는 것.

	// Computer computer;

	// computer.Use();

	// 다중 상속은 여러 개의 상위 클래스에 중복되는 속성이 존재할 수 있기 때문에
	// 범위 지정 연산자를 통해 상위 클래스의 이름을 선언하고 속성을 사용함.

#pragma endregion

#pragma region 가상 상속

	// Hambuger hambuger;

#pragma endregion


	return 0;
}
