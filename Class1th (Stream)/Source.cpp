#include <iostream> 

// char character = 'A';

void recovery(int& health)
{
	health = 100;
}

int main()
{

#pragma region 스트림 (Stream)

	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름.

	// 삽입 연산자 (<<) : 스트림의 경우 입력된 데이터는 출력 장치로 전달하며, "<<" 연산자를 사용하여 자신이 참조한 값을 반환함.

	// std::cout << "C++ Language" << std::endl;

	// std::cout << "C# Language" << std::endl;

	// 스트림은 운영체제에 의해 생성되며, 스트림 자체의 버퍼라는 임시 메모리 공간이 존재함.

	// 추출 연산자 (>>) : 스트림으로 입력받을 때, ">>" 연산자를 사용하여 버퍼에 저장한 다음 NULL 문자까지만 버퍼 안의 내용을 출력함.

	// int data = 0;

	// std::cin >> data;

	// std::cout << "data의 값은 : " << data;

	// int* ptr = new int;
	// int* dynamicarray = new int[5];

	// std::cout << "ptr이 가리키는 값은 : " << *ptr << std::endl;
	// std::cout << "dynamicarray이 가리키는 값은 : " << dynamicarray[4] << std::endl;

	// *ptr = 100;
	// dynamicarray[4] = 100;

	// std::cout << "ptr이 가리키는 값은 : " << *ptr << std::endl;
	// std::cout << "dynamicarray이 가리키는 값은 : " << dynamicarray[4] << std::endl;

	// delete ptr;
	// delete[] dynamicarray;

#pragma endregion

#pragma region 범위 지정 연산자

	// 여러 범위에서 사용된는 식별자를 구분하는데 사용하는 연산자.

	// char character = 'W';

	// std::cout << "character 변수의 값은 : " << character << std::endl;

	// std::cout << "character 전역 변수의 값은 : " << ::character << std::endl;

	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을 때,
	// 가까운 범위에 선언된 변수의 이름을 사용하는 볌위 규칙이 존재하기 때문에 전역 변수가 호출되지 않음.

#pragma endregion

#pragma region 참조자

	// int health = 100;

	// std::cout << "health의 값은 : " << health << std::endl;

	// int& ref = health;

	// ref -= 99;

	// std::cout << "health의 값은 : " << health << std::endl;

	// recovery(health);

	// std::cout << "health의 값은 : " << health << std::endl;

#pragma endregion

	return 0;
}

