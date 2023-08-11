#include <iostream>
#include <vector>
#include <ranges> 
#include <algorithm>

template<typename T>
class take_view
{
	T& range;
	int count;
public:
	take_view(T& r, int cnt) : range(r), count(cnt) {}

	auto begin() { return range.begin(); }
	auto end()   { return std::next(range.begin(), count); }
};

int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	take_view tv(v, 5); // v의 요소를 5개만 볼수 있는 시각(view)


	// 1. v 에서 5개만 출력하고 싶다.
	// 2. v 의 요소를 거꾸로 출력하고 싶다. => 파이썬 reversed
	for (auto e : tv)
		std::cout << e << ", ";

}