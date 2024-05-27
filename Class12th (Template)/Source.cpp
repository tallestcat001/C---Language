#include <iostream>
#include <string>

using namespace std;

template<typename T>
class List
{
private:
	T data;
	T* array;
public:
	List(T data)
	{
		this->data = data;
		array = new T[5];
	}

	bool Compare(T x, T y)
	{
		return (x > y) ? true : false;
	}

	template<typename T>
	bool Compare(const T* x, const T* y)
	{
		int a = strlen(x);
		int b = strlen(y);

		return (a > b) ? a : b;
	}

	~List()
	{
		delete array;
	}
};


template<typename T>
T ADD(T x, T y)
{
	return x + y;
}


int main()
{

#pragma region 템플릿

	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터 타입들을 가질 수 있는 기술에 중점을 두어 재사용을 높일 수 있는 기능.

	// cout << "ADD(int, int)의 값은     : " << ADD(10, 20) << endl;
	// cout << "ADD(float, float)의 값은 : " << ADD(15.4f, 16.7f) << endl;
	// cout << "ADD(char, char)의 값은   : " << ADD('A', 'B') << endl;

	///List<int> list1(10);
	// List<char> list2('A');

	// cout << list1.Compare(10, 20) << endl;
	// cout << list2.Compare("apple", "help") << endl;

#pragma endregion

	return 0;
}

