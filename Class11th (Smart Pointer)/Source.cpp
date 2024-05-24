#include <iostream> 

using namespace std;

class Data
{
public:
	int data;
	Data()
	{
		cout << "create data" << endl;
	}
	~Data()
	{
		cout << "release data" << endl;
	}
};

class Champion
{
private:

public:
	Champion()
	{
		cout << "create Champion" << endl;
	}
	~Champion()
	{
		cout << "release Champion" << endl;
	}
};

class Character
{
private:
	weak_ptr <Character> shardpointer;
public:
	Character()
	{
		cout << "create Character" << endl;
	}
	void Partner(weak_ptr <Character> clone)
	{
		shardpointer = clone;
	}
	~Character()
	{
		cout << "release Character" << endl;
	}
};

int main()
{

#pragma region 스마트 포인터

	// 포인터를 시뮬레이트하는 동시에 자동 메모리 관리 또는 경계 확인과 같은 추가 기능을 제공하는 추상 데이터 유형.

#pragma region Unique 포인터

	// 특정한 객체를 하나의 스마트 포인터으로만 가리킬 수 있도록 하는 포인터.

	// std::unique_ptr <Data> uniqueptr1(new Data());

	// uniqueptr1->data =10;

	// cout << "uniqueptr1이 가리키는 값은 : " << uniqueptr1->data << endl;

	// unique_ptr <Data> uniqueptr2 = move(uniqueptr1);

	// cout << "uniqueptr2이 가리키는 값은 : " << uniqueptr2->data << endl;

#pragma endregion

#pragma region Shard 포인터

	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며, 
	// 모든 포인터 객체가 자원 객체를 필요하지 않을때, 자원 객체를 해제하도록 설계되어있는 포인터.

	// 참조 개수 : 자원 객체를 가리키는 포인터 객체의 수를 의미.

	// shared_ptr <Champion> shardptr1 = make_shared <Champion>();

	// cout << "shardptr1의 참조 개수는 : " << shardptr1.use_count() << endl;

	// {
	//	  shared_ptr <Champion> shardptr2 = shardptr1;
	//	
	//	  cout << "shardptr1의 참조 개수는 : " << shardptr1.use_count() << endl;
	// }

	// cout << "shardptr1의 참조 개수는 : " << shardptr1.use_count() << endl;

#pragma region 순환 참조

	// 자원 객체 내부에서 서로 가리키는 포인터 객체가 있다면 서로를 가리키는 포인터 객체 때문에 
	// 참조 개수가 0으로 떨어지지 않아 포인터 객체가 소멸되지 않는 상황.

	// shared_ptr <Character> shard1 = make_shared <Character>();
	// shared_ptr <Character> shard2 = make_shared <Character>();

	// shard1->Partner(shard2);
	// shard2->Partner(shard1);

#pragma endregion

#pragma endregion

#pragma region Weak 포인터

	// 자원 객체를 소유하지 않기 때문에 std::shard_ptr로 관리되는 자원 객체를 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인터.

	// shared_ptr <Character> shard1 = make_shared <Character>();
	// shared_ptr <Character> shard2 = make_shared <Character>();

	// shard1->Partner(shard2);
	// shard2->Partner(shard1);

#pragma endregion

#pragma endregion

	return 0;
}

