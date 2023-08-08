#include <vector>
#include <algorithm>
#include <functional> // std::less<>, std::greater<> 가 이미 있습니다.
#include "show.h"

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };


	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; } );


	// 람다 표현식의 원리
	// => 위 한줄을 컴파일러가 아래 처럼 변경합니다.
	// => 즉, 람다표현식은 "함수 객체"를 만들어 달라는 요청이고, 
	// => 함수 객체를 사용하는 것과 동일한 효과를 볼수 있습니다.
	class CompilerGeneratedName
	{
	public:
		inline auto operator()(int a, int b) const 
		{ 
			return a < b; 
		}
	};
	std::sort(v.begin(), v.end(), CompilerGeneratedName() );
	//-----------------------------------------------------------

}