#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <vector>

#define UP    72
#define LEFT  75
#define RIGHT 77
#define DOWN  80

using namespace std;

int main()
{

#pragma region 기본 템플릿 라이브러리

#pragma region 선형 컨테이너

	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 일반적인 컨테이너.

#pragma region Vector

	// vector<int> vector;

	// vector.reserve(6);

	// cout << "vector의 capacity값은 :" << vector.capacity() << endl;

	// vector.push_back(10);
	// vector.push_back(20);
	// vector.push_back(30);
	// vector.push_back(40);

	// vector.pop_back();
	
	// for (int i = 0; i < vector.size(); i++)
	// {
	// 	  cout << "vector[" << i << "]의 값은 : " << vector[i] << endl;
	// }

#pragma endregion

#pragma region Rhythm Game

	srand(time(NULL));

	vector<const char*> node;

	node.reserve(6);

	int count = 4;

	for (int i = 0; i < count; i++)
	{
		int random = rand() % 4;

		switch (random)
		{
		case 0 : node.push_back("↑");
			break;
		case 1 : node.push_back("←");
			break;
		case 2 : node.push_back("→");
			break;
		case 3 : node.push_back("↓");
			break;
		}
	}

	for (const char* element : node)
	{
		cout << element << "  ";
	}



#pragma endregion

#pragma endregion

#pragma endregion

	return 0;
}

