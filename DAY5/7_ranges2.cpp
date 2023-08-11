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

	take_view tv(v, 5); // v�� ��Ҹ� 5���� ���� �ִ� �ð�(view)


	// 1. v ���� 5���� ����ϰ� �ʹ�.
	// 2. v �� ��Ҹ� �Ųٷ� ����ϰ� �ʹ�. => ���̽� reversed
	for (auto e : tv)
		std::cout << e << ", ";

}