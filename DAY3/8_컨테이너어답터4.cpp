#include <stack>
#include <queue> // queue, priority_queue
#include <iostream>
#include "show.h"

int main()
{
	// �켱����ť : ��Ҹ� ������ �켱������ ���� ����
	//			��Ұ� ������ �ȴ�.
//	std::priority_queue<int> pq;

	// �� ������ �ᱹ �Ʒ� �ڵ� �Դϴ�. 
	/*
	std::priority_queue<int, // �����ҿ���� Ÿ��
						std::vector<int>, // ���������� ����� �����̳�
						std::less<int>>	  // ��������� ���Ҷ� ����� �Լ���ü
		pq;
		*/

	std::priority_queue<int, std::vector<int>, std::greater<int> > pq;

	pq.push(10);
	pq.push(-30);
	pq.push(-25);
	pq.push(20);
	pq.push(15);

	std::cout << pq.top() << std::endl; 
	pq.pop();
	std::cout << pq.top() << std::endl; 

}



