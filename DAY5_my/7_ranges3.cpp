#ifndef DAY5

#include <iostream>
#include <vector>
#include <algorithm>
//#include <ranges> // c++20부터 이 안에 take_view, reverse_view 등
					// 다양한 view 가 제공됩니다.



int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	// 모든 view 는 중첩이 됩니다.
	std::ranges::filter_view fv(v, [](int n) {return n % 2 == 0; })
	std::ranges::take_view tv(fv, 5);
	std::ranges::reverse_view rv(tv);	// 8, 7, 3, 2, 1

	// syntax sugar		: 문법적 달콤함
	// -> 기능은 동일한데 표기법이 편리하다는 의미
	// -> 아래코드는 위 3줄과 완전히 동일
	//auto rv2 = v | std::views::take(5) | std::views::reverse;
	
	auto rv2 = v	| std::views::filter([](int n) {return n % 2 == 0; } 
					| std::views::take(5) | std::views::reverse;

	// operator| (v, std::voews::take(5) 가 반환한 객체) 라는 형식으로
	// -> 연산자 재정의 테크닉을  사용했을 뿐입니다.
	for (auto e : rv2)
		std::cout << e << ", ";


}


#endif