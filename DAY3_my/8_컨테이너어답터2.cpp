#ifndef DAY3

// 3개의 컨테이너 어답터가 있습니다.
#include <stack>
#include <queue> // queue, priority_queue
#include "show.h"

int main()
{
	std::stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.pop();

	int n = s1.top();	// 반환만 되고, 제거는 안됨

	std::queue<int> q1;
	q1.push(10);
	q1.push(20);
	q1.pop(); // 제거
	int n2 = q1.front(); // 반환만 되고, 제거는 안됨


}


#endif