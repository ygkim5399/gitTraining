#ifndef DEBUG

#include <forward_list> // 싱글 링크드 리스트
#include <list>			// 더블 링크드 리스트

// 교재 53 page 반복자 카테고리
// 입력 반복자 : =*P, ++ 가능
// 출력 반복자 : *P= , ++ 가능
// -> 위	2개는 multiple pass 보장안함
// -> 아래	3개는 multiple pass 보장

// 전진형 반복자 : =*p,++ 가능 ex. 싱글리스트 반복자
// 양방형 반복자 : =*p, ++, -- 가능  ex. 더블리스트 반복자
// 임의접근 반복자 : =*p, ++, --, +, -, [] 가능 -> 연속된 메모리와 유사한 컨테이너
//												ex. vector, deque
// continuous 반복자 : C++17 추가된 개념, 연속된 메모리 보장


int main()
{
	std::forward_list<int> s1 = { 1,2,3 };

	std::list<int> s2 = { 1,2,3 };

	auto p1 = begin(s1); // 싱글리스트 반복자
	auto p2 = begin(s2); // 더블리스트 반복자
	
	// 아래 4줄에서 에러를 찾아보시오
	++p1;
	--p1; // error, 싱글 링크드 리스트는 자료구조 특성상 앞쪽(prev) 로 이동할 수 없다.
	++p2;
	--p2;

	// 
}

#endif