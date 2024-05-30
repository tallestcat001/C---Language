#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{

#pragma region 컨테이너 어댑터

	// 기존의 컨테이너 인터페이스를 제한하여 만든 기능이 제한되거나 변형되어 있는 컨테이너

#pragma region Stack

	// stack<int> stack;

	// stack.push(10);
	// stack.push(20);
	// stack.push(30);
	// stack.push(40);
	// stack.push(50);

	// stack.pop();

	// cout << "stack의 top 값은 :" << stack.top() << endl;
	// cout << "stack의 size 값은 :" << stack.size() << endl;
	// cout << "stack의 empty 값은 :" << stack.empty() << endl;

	// int a = stack.size();

	//	for (int i = 0; i < a; i++)
	//	{
	//		cout << "stack의 [ " << i << " ] 의 값은 : " << stack.top() << endl;
	//		stack.pop();
	//	}

#pragma endregion

#pragma region Queue

	// queue<int> queue;

	// queue.push(10);
	// queue.push(20);
	// queue.push(30);
	// queue.push(40);
	// queue.push(50);

	// queue.pop();

	// cout << "queue의 front 값은 :" << queue.front() << endl;
	// cout << "queue의 size 값은 :" << queue.size() << endl;
	// cout << "queue의 empty 값은 :" << queue.empty() << endl;

	// int a = queue.size();

	//	for (int i = 0; i < a; i++)
	//	{
	//		cout << queue.front() << " ";
	//		queue.pop();
	//	}

#pragma endregion

#pragma region Priority Queue

	// priority_queue<int> priorityqueue;

	// priorityqueue.push(10);
	// priorityqueue.push(99);
	// priorityqueue.push(2);
	// priorityqueue.push(5);
	// priorityqueue.push(11);

	//	while (priorityqueue.empty() == false)
	//	{
	//		cout << priorityqueue.top() << endl;
	//		priorityqueue.pop();
	//	}

#pragma endregion

#pragma endregion

	return 0;
}

