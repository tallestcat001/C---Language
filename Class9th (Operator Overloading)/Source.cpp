#include <iostream> 

using namespace std;

class Vector2
{
private:
	int x;
	int y;
public:
	Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Vector2& operator + (const Vector2& clone)
	{
		Vector2 plus(this->x + clone.x, this->y + clone.y);

		return plus;
	}

	Vector2& operator --()
	{
		this->x -= 1;
		this->y -= 1;

		return *this;
	}

	Vector2& operator --(int)
	{
		Vector2 clone(this->x, this->y);

		this->x -= 1;
		this->y -= 1;

		return clone;
	}

	Vector2 operator *(int value)
	{
		return Vector2(this->x * value, this->y * value);
	}

	int& X()
	{
		return x;
	}

	int& Y()
	{
		return y;
	}
};

Vector2 operator *(int value, Vector2& clone)
{
	return value * clone;
}

int main()
{

#pragma region 연산자 오버로딩

	// Vector2 vector1(10, 10);
	// Vector2 vector2(5, 5);

	//Vector2 vector3 = vector1 + vector2;

	//cout << "vector3 x의 값은 : " << vector3.X() << endl;
	//cout << "vector3 y의 값은 : " << vector3.Y() << endl;

	// Vector2 vector4(10, 10);

	// vector4--;

	// cout << "vector4 x의 값은 : " << vector4.X() << endl;
	// cout << "vector4 y의 값은 : " << vector4.Y() << endl;

	// Vector2 vector5(10, 10);

	// --vector5;

	// cout << "vector4 x의 값은 : " << vector5.X() << endl;
	// cout << "vector4 y의 값은 : " << vector5.Y() << endl;

#pragma endregion

#pragma region 연산자 오버로딩의 교환 법칙

	// 피연산자의 위치는 연산의 아무런 영향을 미치지 않는 법칙.

	// Vector2 position1(10, 10);

	// Vector2 position2 = 2 * position1;

	// cout << "position2의 x 값은 : " << position2.X() << endl;
	// cout << "position2의 y 값은 : " << position2.Y() << endl;

#pragma endregion

	return 0;
}

