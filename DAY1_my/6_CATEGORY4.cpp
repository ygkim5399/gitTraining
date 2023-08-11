#ifndef DEBUG
#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	auto p = std::begin(s);

	auto p2 = std::next(p, 5); // p부터 5칸 이동한 곳의 반복자 반환
								// p는 변하지 않음
	std::cout << *p << std::endl; // 1
	std::cout << *p2 << std::endl; // 6

	std::advance(p, 5); // p 자체를 5칸 이동

	std::cout << *p << std::endl;
}

#endif
