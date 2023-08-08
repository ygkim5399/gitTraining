#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

int main()
{
	// 핵심 1. 모든 람다표현식은 (구현이 동일해도) 다른 타입입니다.
	auto f1 = [](int a, int b) { return a + b; };
	// class xxx{ operator()(..) {}}; xxx();

	auto f2 = [](int a, int b) { return a + b; };
	// class yyy{ operator()(..) {}}; yyy();

	std::cout << typeid(f1).name() << std::endl;
	std::cout << typeid(f2).name() << std::endl;




	std::vector<int> v{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

	// 2. 아래 코드를 생각해 보세요
	// => 모든 람다 표현식은 다른 타입이므로 3개의 sort() 생성
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });

	// 3. 동일한 람다 표현식을 여러번 사용하게 된다면
	// auto 변수에 담아서 사용하는 것이 좋습니다.
	auto cmp = [](int a, int b) { return a < b; };
	// class xxxx{}; xxxx();

	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);

	// 4. 위 같은 경우는 람다표현식 대신,  이미 만들어져 있는 함수객체인
	// std::less 를 사용하는 것도 나쁘지 않습니다.
	std::sort(v.begin(), v.end(), std::less<int>());
	std::sort(v.begin(), v.end(), std::less()); // C++17 <int> 생략가능
	std::sort(v.begin(), v.end(), std::less{}); // () 대신 {} 도 가능
	
}

