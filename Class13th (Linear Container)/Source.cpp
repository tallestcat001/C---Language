#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <list>
#include <deque>

#define UP    72
#define LEFT  75
#define RIGHT 77
#define DOWN  80

using namespace std;

void Check(vector<const char*>& node, const char* arrow, int& health)
{
	if (node.back() == arrow)
	{
		node.pop_back();
	}
	else
	{
		health--;
	}
}

void View(int health)
{
	for (int i = 0; i < health; i++)
	{
		cout << "♥";
	}

	cout << endl;
	cout << endl;

}

int main()
{

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

	// srand(time(NULL));

	// vector<const char*> node;
	// char key = 0;
	// int count = 4;
	// int health = 5;

	// node.reserve(6);

	//	for (int i = 0; i < count; i++)
	//	{
	//		int random = rand() % 4;
	//	
	//		switch (random)
	//		{
	//		case 0 : node.push_back("↑");
	//			break;
	//		case 1 : node.push_back("←");
	//			break;
	//		case 2 : node.push_back("→");
	//			break;
	//		case 3 : node.push_back("↓");
	//			break;
	//		}
	//	}

	//	while (health > 0)
	//	{
	//		View(health);
	//	
	//		for (const char* element : node)
	//		{
	//			cout << element << "  ";
	//		}
	//	
	//		key = _getch();
	//	
	//		if (key == -32)
	//		{
	//			key = _getch();
	//		}
	//	
	//		switch (key)
	//		{
	//		case UP: Check(node, "↑", health);
	//			break;
	//		case LEFT : Check(node, "←", health);
	//			break;
	//		case RIGHT : Check(node, "→", health);
	//			break;
	//		case DOWN : Check(node, "↓", health);
	//			break;
	//		}
	//	
	//		if (node.size() <= 0)
	//		{
	//			break;
	//		}
	//	
	//		system("cls");
	//	
	//	}

	// system("cls");

	//	if (health <= 0)
	//	{
	//		cout << "Defeat" << endl;
	//	}
	//	else
	//	{
	//		cout << "Victory" << endl;
	//	}

#pragma endregion

#pragma region List

	// list<int> list;

	// list.push_back(10);
	// list.push_back(20);

	// list.push_front(5);
	// list.push_front(1);

	// list.pop_back();
	// list.pop_front();

	// cout << "list의 front : " << list.front() << endl;
	// cout << "list의 back  : " << list.back() << endl;

#pragma endregion

#pragma region String

	// string name = "Alistar";

	// name.append(" Champion");

	//	if (name.compare("Alistar"))
	//	{
	//		cout << "문자열이 같습니다." << endl;
	//	}

	// name.clear();

	// cout << "name 변수의 값은 : " << name << endl;

#pragma endregion

#pragma region Deque

	// deque<int> deque;

	// deque.push_front(10);
	// deque.push_back(20);
	// deque.push_back(30);
	// deque.push_back(40);

	// deque.pop_back();
	// deque.pop_front();

	//	for (int i = 0; i < deque.size(); i++)
	//	{
	//		cout << "deque[" << i << "] 값은 : " << deque[i] << endl;
	//	}

#pragma endregion

#pragma endregion

	return 0;
}

