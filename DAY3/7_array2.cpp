// 7_array2
#include <iostream>
#include <array>

// 아래 코드를 생각해 보세요
template<typename T, std::size_t N> struct array
{
	T buff[N];

	int size() const { return N; }
};

int main()
{
	// 구조체 안에 배열이 있으면 아래 처럼 초기화 가능합니다.
	std::array<int, 5> arr = { 1,2,3,4,5 };

	int sz = arr.size();
	
//	arr.resize(10); // 될까요 ??
					// 크기를 변경하려면 "메모리 할당/해지"가 되어야 하는데..
					// std::array 는 "힙" 이 아닌 "stack" 메모리 사용
					// => size 변경은 할수 없습니다.

	// std::array
	// => C++11 에서 추가
	// => "raw array" + 몇가지 멤버 함수를 추가한것(size(), empty(), begin()..)
}
