#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::begin(s);

	
	auto p2 = std::next(p, 5); // p 부터 5칸 이동한 곳의 반복자 반환

	std::cout << *p << std::endl;
	std::cout << *p2 << std::endl;

	std::advance(p, 5);			// p자체를 5칸 이동
}