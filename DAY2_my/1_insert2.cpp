#ifndef DAY2

#include <list>
#include <vector>
#include <algorithm>

int main()
{
	std::list<int> s1 = { 0, 0, 0, 0, 0 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	// v 의 모든 요소를 list 에 추가하고 싶다.

	// 방법 1. push_back 사용
	for (auto e : v)
		s1.push_back(e);


}

#endif