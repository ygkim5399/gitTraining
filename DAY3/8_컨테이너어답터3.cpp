#include <stack>
#include <queue> // queue, priority_queue
#include "show.h"

int main()
{
	// ������ ������ ��� ��� ������
	// STACK : LIFO ( last in first out ), �������θ� ����� �����ϸ� �˴ϴ�
	// QUEUE : FIFO ( first in first out), �������� ����� ���
	// => vector �� ���� ����/������ �ȵ˴ϴ�.
	std::stack<int, std::list<int>>   s1; // ok
	std::stack<int, std::vector<int>> s2; // ok
	std::stack<int, std::deque<int>>  s3; // ok

	std::queue<int, std::list<int>>   q1; // ok
	std::queue<int, std::vector<int>> q2; // error
	std::queue<int, std::deque<int>>  q3; // ok

	// ��, ������ �ϸ�, �� �ڵ� ��ü�� ������ �ƴմϴ�.
	q2.push(10);
}



