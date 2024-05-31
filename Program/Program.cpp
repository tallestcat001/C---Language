#include <iostream>

using namespace std;

class Item
{
private:
	int price;
public:
	Item(int price)
	{
		cout << "Constructor" << endl;
		this->price = price;
	}
	Item(Item& item)
	{
		cout << "Copy Constructor" << endl;
		price = item.price;
	}
};

class Card
{
public:
	virtual void show() = 0;
	virtual void skill() = 0;
	virtual void effect() = 0;

};

class Legend : Card
{
public:
	void show()  override
	{
		cout << "Legend Card" << endl;
	}
	void skill() override
	{
		cout << "Legend skill" << endl;
	}
	void effect() final
	{
		cout << "Legend effect" << endl;
	}
};

class Unqiue : Legend
{
public:
	Unqiue()
	{
		effect();
	}
};

int main()
{

#pragma region R value and L value

	// L value type
	/*
	int data = 10;

	cout << data << endl;

	int& left1 = data;

	left1= 20;

	cout << data << endl;
	*/

	// R value type
	/*
	int count = 0;

	int&& right1 = 10;

	cout << "right1의 값은 : " << right1 << endl;

	right1 = 30;

	cout << "right1의 값은 : " << right1 << endl;
	*/

#pragma endregion

#pragma region 복사 생략 (Copy Elision)

	// 함수의 반환 값을 모두 사용하거나 초기화하는 경우에 생기는 불필요한 임시 객체를 최적화 하거나 제거하는데 사용되는 컴파일러 기술.

	// Item item1(10000);

	// Item item2(item1);

#pragma endregion

#pragma region Final



#pragma endregion

	return 0;
}

