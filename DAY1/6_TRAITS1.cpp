#include <iostream>
#include <list>

// 주어진 구간 [first ~ last) 의 합을 구하는 sum 함수를 만들어 봅시다.
template<typename T>
? sum(T first, T last)
{
	? s = 0;

	while (first != last)
	{
		s += *first;
		++first;
	}
	return s;
}


int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int n = sum(std::begin(s), std::end(s));

	std::cout << n << std::endl; // 55
}