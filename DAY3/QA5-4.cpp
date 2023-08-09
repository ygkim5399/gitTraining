#include <stdio.h>

namespace std
{
	class string {};

	template<typename T>
	void max(T a, T b) { printf("std::max\n"); }

	// C++20 에서 추가
	namespace ranges
	{
		// 핵심 : C++20 의 모든 새로운 알고리즘은 함수 객체 입니다.
		struct MaxFn
		{
			template<typename T>
			inline void operator()(T a, T b)
			{
				printf("std::ranges::max\n");
			}
		};
		MaxFn max; // max 는 함수가 아닌 객체 이름 입니다.
				   // () 연산자 때문에 함수 처럼 사용가능한 함수 객체
				   // ADL 규칙에 적용되지 않고, 함수보다 우선 선택
	}
}
int main()
{
	std::string s1, s2;
	std::max(s1, s2);			// std::max
	std::ranges::max(s1, s2);	// std::ranges::max

	using namespace std::ranges;

	max(s1, s2);	
}
// cppreference.com 에서 "std::ranges::max" 찾으세요
// "possible implementation" 보세요