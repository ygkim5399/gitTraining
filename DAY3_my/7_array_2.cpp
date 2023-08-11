#ifdef DAY3
#include <iostream>
#include <array>


// 아래 코드를 생각해 보세요

template <typename T, std::size_t N>
struct array {
	T buff[N];
	int size() const { return N; }
};

int main() {
	// 구조체 안에 배열이 있으면 아래처럼 초기화 가능합니다.
	std::array<int, 5> arr = { 1,2,3,4,5 };
	int sz = arr.size();

	//arr.resize(10); // 될까요? 
					// resize 를 쓰려면 메모리가 힙에 있어야한다.
					// 크기를 변경하려면 메모리할당/해지가 되어야 하는데
					// std::array 는 heap 이 아닌 stack 메모리사용
					//-> size 변경은 할 수 없습니다.

	//std::array
	//-> c++11에서 추가
	//-> raw array + 몇가지 함수를 추가한 것 (size(), empty(), begin()...)
	//

}
#endif