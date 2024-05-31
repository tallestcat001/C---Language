#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{

#pragma region 연관 컨테이너

	// 컨테이너 내의 자료들이 규칙에 따라 정렬되어 있는 컨테이너.

#pragma region 반복자

	// 컨테이너 내의 원소를 순회하기 위해 사용되는 도구.

	// set<int> Set;

	// set<int>::iterator iterator;

	// Set.insert(50);
	// Set.insert(10);
	// Set.insert(80);
	// Set.insert(30);
	// Set.insert(65);
	// Set.insert(45);

	//	for (iterator = Set.begin(); iterator != Set.end(); iterator++)
	//	{
	//		cout << *iterator << endl;
	//	}

	// set의 경우 Key값이 중복일 경우 값이 그대로 들어옴.

#pragma endregion

#pragma region Map

	// map<string, int> Map;

	// map<string,int>::iterator iterator;

	// Map.insert({ "Sword", 10000 });
	// Map.insert({ "Armor", 7500 });

	//	if (Map.find("Sword") != Map.end())
	//	{
	//		cout << "Find" << endl;
	//	}
	//	else
	//	{
	//		cout << "Not Find" << endl;
	//	}

	// Map.erase("Sword");

	//	for (iterator = Map.begin(); iterator != Map.end(); iterator++)
	//	{
	//		cout << "Key : " << iterator->first << endl;
	//		cout << "Value :" << iterator->second << endl;
	//	}

#pragma endregion

#pragma endregion

	return 0;
}

