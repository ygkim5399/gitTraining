#ifndef DAY3

#include <stack>
#include <queue> // queue, priority_queue
#include <iostream>
#include "show.h"

int main()
{
	// 우선순위큐 : 요소를 꺼낼때 우선순위가 가장 높은
	//			요소가 나오게 된다.
	
	//std::priority_queue<int> pq;
	// 위 한줄은 결국 아래 코드입니다. 
	
	std::priority_queue<int,				// 저장할 요소의 타입
						std::vector<int>,	// 내부적으로 사용할 컨테이너	
						std::less<int>> pq;	// 우선순위를 정할때 사용할 함수객체
	

	std::priority_queue<int, std::vector<int>, std::greater<int>> pq1;
	pq.push(10);
	pq.push(-30);
	pq.push(-25);
	pq.push(20);
	pq.push(15);

	std::cout << pq.top() << std::endl; 
	pq.pop();
	std::cout << pq.top() << std::endl; 

}



#endif