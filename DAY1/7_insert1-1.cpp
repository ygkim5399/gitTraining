#include <iostream>
#include <list>
#include <iterator>

// 핵심 : 삽입반복자를 만드는 2가지 방법


template<typename T>
std::back_insert_iterator<T> xback_inserter(T& c)
{
	return std::back_insert_iterator<T>(c);
}

int main()
{
	std::list<int> s = { 1, 2, 3, 4, 5 };

	// 클래스 이름을 직접 사용해서 삽입 반복자 생성
	std::back_insert_iterator bi1(s);                   // C++17
	std::back_insert_iterator< std::list<int> > bi2(s); // C++17 이전

	// 함수 버전을 사용해서 생성
//	auto bi3 = xback_inserter(s); // 타입을 전달하지 않아도 ok..
	auto bi3 = std::back_inserter(s); // 이미 표준에 있습니다.
}
