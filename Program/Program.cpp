#include <iostream>
#include <set>

using namespace std;

int main()
{

#pragma region 연관 컨테이너

	// 컨테이너 내의 자료들이 규칙에 따라 정렬되어 있는 컨테이너.

	set<int> set;

	set.insert(50);
	set.insert(10);
	set.insert(80);
	set.insert(30);
	set.insert(65);
	set.insert(45);
	
	// set의 경우 Key값이 중복일 경우 값이 그대로 들어옴.

#pragma endregion

	return 0;
}

