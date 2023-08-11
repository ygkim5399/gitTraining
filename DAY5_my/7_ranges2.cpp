#ifndef DAY5

#include <iostream>
#include <vector>
#include <algorithm>
//#include <ranges> 


template <typename T>
class take_view {
	T& range;
	int count;
public:
	take_view(T& r, int cnt) : range(r), count(cnt) {}
	auto begin() { return range.begin(); }
	auto end() { return std::next(range.begin(), count); }

};

template <typename T>
class reverse_view {
	T& range;
public:
	reverse_view(T& r) : range(r) {}
	auto begin()	{ return range.rbegin(); }
	auto end()		{ return range.rend(); }

};

int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	take_view tv(v, 5); // v의 요소를 5개만 볼 수 있는 시작 (view)
	reverse_view rv(v);
	// 1. v 에서 5개만 출력하고 싶다.
	// 2. v의 요소를 거꾸로 출력하고 싶다. -> 파이썬 reversed
	for (auto e : rv)
		std::cout << e << ", ";


}


#endif