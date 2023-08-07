#include <iostream>
#include <list>

template<typename T>
typename T::value_type sum(T first, T last)
{
	// T : 반복자 인데, 현재는 int* 입니다.

	typename T::value_type s = 0;

	while (first != last)
	{
		s += *first;
		++first;
	}
	return s;
}

int main()
{
//	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 핵심 : raw pointer 도 반복자입니다.
	int n = sum(std::begin(s), std::end(s));

	std::cout << n << std::endl; // 55
}