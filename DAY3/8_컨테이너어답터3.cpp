#include <stack>
#include <queue> // queue, priority_queue
#include "show.h"

int main()
{
	// 다음중 에러를 모두 골라 보세요
	// STACK : LIFO ( last in first out ), 한쪽으로만 입출력 가능하면 됩니다
	// QUEUE : FIFO ( first in first out), 양쪽으로 입출력 사용
	// => vector 는 전방 삽입/삭제가 안됩니다.
	std::stack<int, std::list<int>>   s1; // ok
	std::stack<int, std::vector<int>> s2; // ok
	std::stack<int, std::deque<int>>  s3; // ok

	std::queue<int, std::list<int>>   q1; // ok
	std::queue<int, std::vector<int>> q2; // error
	std::queue<int, std::deque<int>>  q3; // ok

	// 단, 컴파일 하면, 위 코드 자체가 에러는 아닙니다.
	q2.push(10);
}



