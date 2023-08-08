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

// 2. iterator 버전
template<typename T>
void show(T first, T last)
{
	// 아래 코드는 "T" 가 객체형 반복자 일때만 가능하고
	// "raw pointer" 일때는 안됩니다.
//	std::ostream_iterator< typename T::value_type  > p(std::cout, ", ");

	// 아래 처럼하면 "T" 가 raw pointer 도 가능..
	// => 가장 좋은 코드.
	std::ostream_iterator< typename std::iterator_traits<T>::value_type  > p(std::cout, ", ");

	std::copy(first, last, p);

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

	show(x, x + 5);
	show(v.begin(), std::next(v.begin(), 5));
					// "v.begin() + 5" 도 가능(임의접근 이므로)
					// 하지만 v가 list 라면 std::next() 필요
}