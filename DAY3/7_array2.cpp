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
	
	arr.resize(10); // 될까요 ??
}
