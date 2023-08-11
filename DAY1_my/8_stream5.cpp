
#ifdef DEBUG

#include <iostream>
#include <iterator>
#include <list>
#include <fstream>
#include <vector>

// 1. container 버전
// -> ragne-for 로 사용하는 것이 가장 좋습니다.
template<typename C>
void show(const C& c) {
	for (auto e : c)
		std::cout << e << ", ";
	std::cout << std::endl;
}

// 2. iterator 버전

template <typename T>
void show(T first, T last) {
	// 아래 코드는 T 가 객체형 반복자일때만 가능하고
	// raw pointer 일때는 안됩니다. 
	//std::ostream_iterator<typename T::value_type> p(std::cout, ", ");
	
	// 아래처럼하면 T 가 raw_pointer 일때도 가능
	// -> 가장 좋은 코드 
	std::ostream_iterator<typename std::iterator_traits<T>::value_type> p(std::cout, ", ");

	std::copy(first, last, p);
	std::cout << std::endl;
}

//#include "show.h" // 위 2개 함수가 이 헤더에 있습니다. 
//				// 이시간 이후부터는 이 헤더 사용하겠습니다.

int main() {

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너의 모든요소를 화면 출력할 일이 많이 있습니다.
	// 아래 함수를 만들어 봅시다..
	show(v);
	show(x);
	
	show(x, x + 5);
	show(v.begin(), std::next(v.begin(), 5));
					// v.begin() + 5 도 가능 (임의접근 이므로)
					// v 가 list 라면 std::next() 필요
}

#endif