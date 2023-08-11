#include <iostream>
#include <vector>
#include <algorithm>

#include <ranges> // C++20 부터 이안에 take_view, reverse_view등
					// 다양한 view 가 제공됩니다.

int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10, 12, 14, 16 };

	// 모든 view 는 중첩이 됩니다.
	std::ranges::filter_view fv(v, [](int n) { return n % 2 == 0; });
	std::ranges::take_view tv(fv, 5);
	std::ranges::reverse_view rv(tv); // 8, 7, 3, 2, 1

	// syntax sugar : 문법적 달콤함
	// => 기능은 동일한데, 표기법이 편리하다는 의미
	// => 아래 코드는 위 3줄과 완전히 동일

	auto rv2 = v | std::views::filter([](int n) { return n % 2 == 0; })
		         | std::views::take(5) | std::views::reverse;

	// operaor|(v, std::views::take(5)가반환한객체) 라는 형식으로
	// => 연산자 재정의 테크닉을 사용했을 뿐 입니다.!!

	for (auto e : rv2)
		std::cout << e << ", ";

}