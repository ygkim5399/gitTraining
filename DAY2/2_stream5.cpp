#include <vector>
#include <algorithm>
#include <iostream>

// 1. container 버전
// => "range - for" 로 사용하는 것이 가장 좋습니다.
template<typename C>
void show(const C& c)
{
	for (auto e : c)
		std::cout << e << ", ";

	std::cout << "\n";
}

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

	// 컨테이너의 모든 요소를 화면 출력할 일이 많이 있습니다.
	// 아래 함수를 만들어 봅시다.
	show(v);
	show(x);
}