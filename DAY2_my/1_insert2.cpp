#ifndef DAY2

#include <list>
#include <vector>
#include <algorithm>

int main()
{
	std::list<int> s1 = { 0, 0, 0, 0, 0 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	// v �� ��� ��Ҹ� list �� �߰��ϰ� �ʹ�.

	// ��� 1. push_back ���
	for (auto e : v)
		s1.push_back(e);


}

#endif