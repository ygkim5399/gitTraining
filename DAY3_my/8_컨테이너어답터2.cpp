#ifndef DAY3

// 3���� �����̳� ����Ͱ� �ֽ��ϴ�.
#include <stack>
#include <queue> // queue, priority_queue
#include "show.h"

int main()
{
	std::stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.pop();

	int n = s1.top();	// ��ȯ�� �ǰ�, ���Ŵ� �ȵ�

	std::queue<int> q1;
	q1.push(10);
	q1.push(20);
	q1.pop(); // ����
	int n2 = q1.front(); // ��ȯ�� �ǰ�, ���Ŵ� �ȵ�


}


#endif