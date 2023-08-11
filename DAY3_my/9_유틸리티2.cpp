#ifndef DAY3

#include <tuple>
#include <iostream>

int main()
{
	// pair : C++98. 서로 다른 타입의 객체 2개 보관
	std::pair<int, double> p1(3, 3.4);


	//pair 에 3개 이상도 가능합니다.
	std::pair<int, std::pair<double, short>> p2(3, { 3.4, 3 });

	auto a1 = p2.second.first; // 3.4


	// c++11 부터는 N 개를 보관가능한 tuple 이 지원됩니다.
	std::tuple<int, double, short>	t1(1, 3.4, 2);
	std::tuple						t1(1, 3.4, 2); // c++17
	
	auto t3 = std::make_tuple(1, 3.4, 2);


	// tuple 의 요소 접근은 std::get 을 사용
	std::get<0>(t1) = 100;	// 파이썬의 t1.0 = 100;

	std::cout << std::get<0>(t1) << std::endl; // 100;



}
// tuple 만 있으면 되지? 왜 pair를 사용해야 하나요?
// pair : c++98
// tuple : c++11	 가변인자 템플릿이라는 문법이 생겨서
//					tuple 을 만들 수 있게 되었습니다.

// 그래서 c++98때 만들어진 클래스는 pair 를 반환하거나 인자로 받게 됩니다.
//auto ret = set.insert(4); // ret 은 pair 입니다.

// 대부분 다른 언어의 tuple : 컴파일러 자체가 인식하는 타입
// c++ tuple : 클래스로 만든 것. 
//				사용자들이 직접 만들어도 됩니다.

// 2개만 관리할 때는 pair 를 선호
// -> 클래스 자체가 가볍고 
// -> 컴파일 시간도 줄어듭니다.

// tuple 은 가변인자 템플릿이라 컴파일 시간이 더 소요됩니다.

#endif