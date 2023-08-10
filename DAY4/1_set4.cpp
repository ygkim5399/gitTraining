// 5_사용자정의타입6.cpp => 1_set4.cpp
#include "show.h"
#include <set>

struct Compare
{
	bool operator()(int a, int b) const
	{
		return (a / 10) < (b / 10);
	}
};

int main()
{
	std::set<int, Compare> s;

	// 1. 다음중 실패는 ?
	s.insert(15);
	s.insert(25);
	s.insert(45);
	s.insert(35);
	s.insert(22);  // 실패, 십의자리가 2인 경우는 이미 있다. (25)
	show(s);



	// 아래 2개의 검색 결과는 어떻게 나올까요 ?
	// 아래 코드가 equality(동일성)
	// std::find : 선형 검색, 
	//             "==" 를 사용해서 동일성을 조사.
	//             현재 s 안에 12가 없으므로 실패. 
	auto ret1 = std::find(s.begin(), s.end(), 12); // ==
	
	if (ret1 == s.end())
		std::cout << "실패" << std::endl;


	// 아래는 equivalency(동등성 검색)
	// => 사용자가 전달한 비교 함수(Compare) 사용 
	auto ret2 = s.find(12);		// if ( 비교함수(root, 12 ) )
								//		오른쪽 자식으로 이동
								// else if (  비교함수( 12, root ) )
								//		왼쪽 자식으로 이동
								// else
								//		찾았다.


	std::cout << *ret2 << std::endl; // 15
}