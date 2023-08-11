#ifdef DAY2


#include <vector>
#include <algorithm>
#include <functional> // std::less<>, std::greater<> 가 이미 있습니다. 
#include "show.h"


inline bool cmp1(int a, int b) { return a < b; }

// std::sort() 사용법 정리


int main() {
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 4. 비교정책으로 람다표현식 사용
	// -> 함수 객체와 동일한 효과
	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });

	// 람다 표현식의 원리
	// -> 위 한줄을 컴파일러가 아래처럼 변경합니다. 
	// -> 즉, 람다표현식은 "함수 객체"를 만들어달라는 요청이고
	// -> 함수 객체를 사용하는 것과 동일한 효과를 볼 수 있다.
	class CompilerGeneratedName {
	public:
		inline auto operator()(int a, int b) const { return a < b; }
	};
	std::sort(v.begin(), v.end(), CompilerGeneratedName());
	//-----------------------------------------------
	// sort 를 여러번 사용했을 때는 lambda 가 성능이 떨어진다 (함수객체보다), 일반함수보다는 성능향상
	// -> 여러개의 class 생성되기 때문
}



#endif