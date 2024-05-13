#include <iostream> 

using namespace std;

#pragma region 생성자

	// 클래스의 인스턴스가 생성되는 시점에서 자동으로 호출되는 특수한 멤버함수.

	class GameObject
{

private:
	int x;
	int y;
	int z;

	static int score;

public:
	GameObject()
	{
		cout << "Creat GameObject" << endl;
	}
	
#pragma region 소멸자

	// 객체가 소멸될 때 자동을 실행되는 클래스의 멤버 함수.

	~GameObject()
	{
		score++;
		cout << "score : " << score << endl;
		cout << "Release GameObject" << endl;
	}

	// 소멸자는 객체가 메모리에서 해제될 때 단 한 번만 호출되며,
	// 소멸자에는 매개 변수를 생성하여 사용할 수 없음.

#pragma endregion

	// 생성자의 경우 객체가 생성될 때 단 한 번만 호출되며,
	// 생성자는 반환형이 존재하기 않기 때문에 생성자가 호출되기
	// 전에는 객체에 대한 메모리는 할당하기 않음.

};

#pragma endregion

int GameObject::score = 0;

class Bullet
{
private:
	int x;
	int y;
	int velocity;
public:
	Bullet(int x, int y, int velocity)
	{
		// this 포인터 : 자기 자신을 가리키는 포인터.
		
		this->x = x;
		this->y = y;
		this->velocity = velocity;

	}

	Bullet(Bullet& clone)
	{
		cout << "copy constructor" << endl;
		x = clone.x;
		y = clone.y;
		velocity = clone.velocity;
	}

	void information()
	{
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
		cout << "velocity :" << velocity << endl;
	}
};

int main()
{

#pragma region 생성자
	
	// GameObject gameObject;

	// GameObject* ptr1 = new GameObject();
	// GameObject* ptr2 = new GameObject();
	// GameObject* ptr3 = new GameObject();

	// delete ptr1;
	// delete ptr2;
	// delete ptr3;

#pragma endregion

#pragma region 복사 생성자

	// 같은 객체를 복사하여 생성시킬 때 호출되는 생성자.

	Bullet bullet1(1, 1, 5);
	
	bullet1.information();

	Bullet bullet2(bullet1);

	bullet2.information();

	Bullet bullet3 = bullet2;

	bullet3.information();

	// 복사 생성자를 정의하지 않고, 객체를 복사하게 되면 
	// 기본 복사 생성자가 호출되기 때문에 얕은 복사로 객체가 복사됨.

#pragma endregion

	return 0;
}

