#ifndef DAY2


#include <iostream>
#include <list>
#include <algorithm>



// adapter 패턴 : 기준 클래스틩 인터페이스 (함수이름) 을 
//				사용자가 요구하는 형태로 변경하는 디자인 패턴


// reverse_iterator 는 결국
// ++ -> -- 연산으로 변경
// -> 그래서 iterator adapter 라는 용어로 분류합니다.
// -> 4개의 iterator adapter 가 있습니다.

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };


	// 컨테이너에서 꺼내는 iterator 는 4가지 종류가 있습니다. 

	// 1. 기본 반복자
	std::list<int>::iterator p1 = s.begin(); // std::begin(s);

	// 2. 역 반복자 (reverse interator) 
	std::list<int>::reverse_iterator p2 = s.rbegin(); //std::rbegin(s);

	// 3. 상수 반복자 (const iterator)
	std::list<int>::const_iterator p3 = s.cbegin(); //std::cbegin(s);
	//*p3 = 10; // error. 상수반복자는 읽기만 가능

	// 4. 상수 역반복자 (const reverse iterator)
	std::list<int>::const_reverse_iterator p4 = s.crbegin(); //std::crbegin(s);

}

#endif