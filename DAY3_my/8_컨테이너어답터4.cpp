#ifndef DAY3

#include <stack>
#include <queue> // queue, priority_queue
#include <iostream>
#include "show.h"

int main()
{
	// �켱����ť : ��Ҹ� ������ �켱������ ���� ����
	//			��Ұ� ������ �ȴ�.
	
	//std::priority_queue<int> pq;
	// �� ������ �ᱹ �Ʒ� �ڵ��Դϴ�. 
	
	std::priority_queue<int,				// ������ ����� Ÿ��
						std::vector<int>,	// ���������� ����� �����̳�	
						std::less<int>> pq;	// �켱������ ���Ҷ� ����� �Լ���ü
	

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