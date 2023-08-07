#include <iostream>
#include <list>
#include <vector>
#include <iterator>

// 삽입반복자종류 3가지
// 전방 삽입
// 후방 삽입
// 임의 삽입

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::list<int> s = { 0, 0, 0, 0, 0 };
	
	// 1. 후방 삽입 반복자 - s.push_back 사용
//	std::back_insert_iterator< std::list<int> > bi(s);
//	std::copy(v.begin(), v.end(), bi);
					// 0, 0, 0, 0, 0, 1, 2, 3, 4, 5

	// 2. 전방 삽입 반복자 - s.push_front 사용
	std::front_insert_iterator< std::list<int> > bi(s);
	std::copy(v.begin(), v.end(), bi);
					// 5, 4, 3, 2, 1, 0, 0, 0, 0, 0




	for (auto n : s)
		std::cout << n << ", ";
}
