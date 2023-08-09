// 6_선형컨테이너

// sequence container
// => 모든 요소가 삽입된 순서대로 한줄로 놓여 있는 것
// => STL 에는 5개가 있습니다.

// C++98 에서 3개
#include <vector>  // 연속된 메모리, 임의접근 반복자
#include <deque>   // 연속된 메모리와 유사, 임의접근 반복자
#include <list>    // 떨어진 메모리, 양방향 반복자

// C++11 추가된 2개
#include <forward_list> // 싱글 링크드 리스트, 전진형 반복자, 
#include <array>		// 임의접근 반복자

#include "show.h"


int main()
{
	// 1. 각 컨테이너가 요소를 보관하는 메모리 구조 알아 두세요
	// => 각 컨테이너의 반복자의 종류(category) 반드시 기억하세요
	std::list<int>   s = { 1, 2, 3, 4, 5 };
	std::deque<int>  d = { 1, 2, 3, 4, 5 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	// 2. 사용법이 유사하다
	// => 기능은 거의 동일하는 의미.
	// => 각각의 기능에 대한 성능의 차이
	// 검색 : vector 가 제일 빠르다.
	// 중간삽입/삭제 : list 가 빠르다.
	// => 단, 캐쉬등을 고려 한다면 의외로 vector가 빠릅니다.
	// => 특별한 이유가 없다면 vector 를 사용하세요!
	s.push_back(10);
	d.push_back(10);
	v.push_back(10);



	// 2. 사용법이 다르다면 의도적인 설계 이다.


	// 3. 컨테이너를 변경하면서 테스트해 볼수 있다.



}
