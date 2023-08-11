#include <stdio.h>

namespace std
{
	class string {};

	template<typename T>
	void max(T a, T b) { printf("std::max\n"); }

	// c++ 20 에서 추가
	namespace ranges
	{
		template<typename T>
		void max(T a, T b) { printf("std::ranges::max\n"); }
	}
}

int main()
{
	std::string s1, s2;

	std::max(s1, s2);		// std::max
	std::ranges::max(s1, s2);	// std::ranges::max


	using namespace std::ranges;
	max(s1, s2);				// 1. ADL 에 의하면 std::max
	std::ranges::max(s1, s2);	// 2. using namespace std::ranges 떄문에 std::ranges::max 도 가능
								// 결국 함수 호출이 모호하다고 에러 밠ㅇㅇ


}