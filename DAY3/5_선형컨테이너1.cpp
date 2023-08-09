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
	// => vector 는 앞쪽으로 삽입/삭제가 불가능
	s.push_front(10); // ok
	d.push_front(10); // ok
//	v.push_front(10); // error . 연속된 메모리의 전방삽입(삭제)는 너무 느립니다.
					  // 만일 이 함수를 제공했다면
					  // "초보자들은 성능저하가 있음에도 불구하고 사용할수 있으므로"
					  // 사용하지 말라는 의도적인 설계
	// => [] 연산은 list 는 불가능
	int n1 = v[3]; // ok
	int n2 = d[3]; // ok
//	int n3 = s[3]; // error.


	// 3. 컨테이너를 변경하면서 테스트해 볼수 있다.
	// => 사용법이 유사하므로
//	std::vector<int> c = { 1, 2, 3, 4, 5 };
	std::list<int> c = { 1, 2, 3, 4, 5 };

	c.push_back(5);
	int n5 = c.back();

	// 4. 메모리 크기.  
	// => vector 가 제일 작게 사용, deque, list 순..
	// => 제일작은것은 std::array


	// 5. 선택기준
	// => vector 을 우선 고려 하는데..

	// 전방삽입이 필요 없고 [] 연산도 사용한다면 : vector 
	// 전방삽입이 필요 하고 [] 연산도 사용한다면 : deque
	// [] 연산 필요 없고, 중간에 삽입 삭제 가 많다면 : list
}
