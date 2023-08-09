#include <tuple>
#include <iostream>

int main()
{
	// pair : C++98. 서로 다른 타입의 객체 2개 보관
	std::pair<int, double> p1(3, 3.4);

	// pair 에 3개 이상도 가능합니다.
	std::pair<int, std::pair<double, short>> p2(3, { 3.4, 3 } );

	auto a1 = p2.second.first; // 3.4


	// C++11 부터는 N 개를 보관가능한 tuple 이 지원됩니다.
	std::tuple<int, double, short> t1(1, 3.4, 2);
	std::tuple					   t2(1, 3.4, 2); // C++17
	auto t3 = std::make_tuple(1, 3.4, 2); 

	// tuple 의 요소 접근은 std::get을 사용
	std::get<0>(t1) = 100;

	std::cout << std::get<0>(t1) << std::endl; // 100
}
// tuple 만 있으면 되지 ?? 왜 pair 를 사용해야 하나요 ?
// pair : C++98
// tuple : C++11  . 가변인자 템플릿 이라는 문법이 생겨서, 
//					tuple 을 만들수 있게 되었습니다.

// 그래서, C++98 때 만들어진 클래스는 pair 를 반환하거나 인자로 받게 됩니다.
// auto ret = set.insert(4); // ret 는 pair 입니다.

// 대부분 다른 언어의 tuple : 컴파일러 자체가 인식하는 타입
// C++ tuple : 클래스로 만든 것. 
//			  사용자들이 직접 만들어도 됩니다.