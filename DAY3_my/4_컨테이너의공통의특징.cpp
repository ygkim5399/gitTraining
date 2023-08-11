#ifndef DAY3

#include <list>
// STL 컨테이너의 특징

int main()
{
	std::list<int> s = { 1,2,3 };

	// 1. 멤버 타입이 있다.
	// 클래스				: 멤버테이터(필드), 멤버함수(메소드)
	// STL 클래스(컨테이너) : 멤버테이터(필드), 멤버함수(메소드), 멤버타입

	std::list<int>::value_type n = s.front();

	// ? 에 가장 좋은 코드를 넣어보자
	//? sz = s.size(); 
	
	// 컨테이너가 가진 요소의 개수를 담을 때,
	//std::size_t sz = s.size(); // 보통 이렇게 하지만 64bit 일 경우 문제
	
	std::list<int>::size_type sz1 = s.size();	// 최선의 코드는 이 코드입니다. 
	auto sz3 = s.size();						// 도 가능

	// cppreference.com 에서 std::list 를 검색해보세요


	// 2. STL 컨테이너의 모든 멤버함수는 반환과 제거를 동시에 하지 않는다.
	// 멀티쓰레드를 쓸 경우 아래 두 코드는 동기화를 해야한다. 
	// -> 예외 안전성의 "강력 보장"을 지원하기 위해서는 
	// 이렇게 설계할 수 밖에 없었습니다.
	int n = s.back();	// 반환만. 제거되지 않는다.
	s.pop_back();		// 제거만 한다. 반환 타입은 void

	// 3. 단위 전략을 많이 사용한다.
	// -> 메모리 할당기, 비교 정책 등.. 다양하게 활용됨...
	std::list<int, debug_alloc<int>> s2;
}

#endif