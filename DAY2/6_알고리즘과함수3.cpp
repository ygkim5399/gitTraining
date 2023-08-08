#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// ������(predicator) : ��ȯ Ÿ���� bool �� �Լ�
// ���� ������ : ���ڰ� �Ѱ��� ������

// find_if �� 3��° ���ڴ� "unary predicator" �̾�� �մϴ�.

bool foo(int n) { return n % 3 == 0; }


int main()
{
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// std::find    : �� �˻�		3��° ���ڰ� ��
	// std::find_if : ���� �˻�		3��° ���ڰ� �Լ�

	// �־��� �������� 3�� ã�� �ʹ�.
	auto p1 = std::find(v.begin(), v.end(), 3);

	// �־��� �������� "3���" �� ã�� �ʹ�.
	auto p2 = std::find_if(v.begin(), v.end(), foo );

	std::cout << *p2 << std::endl; // 6

}



















//
