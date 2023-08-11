#ifndef DAY3

// 6_선형컨테이너
// sequence container
// -> 모든 요소가 삽입된 순서대로 한줄로 놓여있는것
// -> STL에는 5개가 있습니다. 

// C++98 에서 3개
#include <vector>  // 연속된 메모리, 임의접근 반복자
#include <deque>   // 연속된 메모리와 유사, 임의접근 반복자
#include <list>    // 떨어진 메모리, 양방향 반복자

// C++11 추가된 2개
#include <forward_list> // 싱글링크드 리스트, 전진형 반복자
#include <array>		// 임의접근 반복자

#include "show.h"

int main()
{
	// 1. 각 컨테이너가 요소를 보관하는 메모리 구조 알아두세요
	// -> 각 컨테이너의 반복자의 종류(category) 반드시 기억하세요
	std::list<int>   s = { 1, 2, 3, 4, 5 };
	std::deque<int>  d = { 1, 2, 3, 4, 5 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	// 2. 사용법이 유사하다
	// -> 기능은 거의 동일하다는 의미.
	// -> 각각의 기능에 대한 성능의 차이
	// 검색		: vector 가 제일 빠르다
	// 중간삽입/삭제	: list 가 제일 빠르다.
	// -> 단 캐쉬등을 고려한다면 의외로 vector 가 빠릅니다. 
	// -> 특별한 이유가 없다면 vector 를 사용하세요
	// ****
	// 대부분의 cpu 에는 캐쉬가 있다.
	// 떨어진메모리보다는 연속된 메모리가 캐쉬에 올라갈 가능성이 높다. 
	// 삽입 /삭제의 경우에도 vector 가 성능이 좋을 수 있다. 
	s.push_back(10);
	d.push_back(10);
	v.push_back(10);



	// 3. 사용법이 다르다면 의도적인 설계 이다.
	// -> vector 는 앞쪽으로 삽입/삭제가 불가능
	s.push_front(10);	// ok
	d.push_front(10);	// ok
	//v.push_front(10); // error. 연속된 메모리의 전방삽입/삭제는 너무 느리다. 
						//		  성능이 너무 느리다. (모두 복사)
						// 이 함수 제공 시 초보자들은 성능저하가 있음에도 불구하고
						//	사용할 수 있으므로 
						// 사용하지 말라는 의도적인 설계

	// -> [] 연산은 list 는 불가능
	int n1 = v[3];		// ok
	int n2 = d[3];		// ok
	//int n3 = s[3];	// error. 

	// 4. 컨테이너를 변경하면서 테스트해 볼수 있다.
	// -> 사용법이 유사하므로

	//std::vector<int> c = { 1,2,3,4,5 };
	std::list<int> c = { 1,2,3,4,5 };

	c.push_back(5);
	int n5 = c.back();


	// 5. 메모리 크기. (vector < deque < list) 
	// int 100 의 경우
	// vector	: 400 byte
	// list		: 400 byte + linked
	// decue	: 400 byte + ... 

	// -> 제일 작은 것은 std::array



	// 6. 선택 기준
	// -> vector 를 우선 고려 하는데
	// 전방삽입이 필요없고 [] 연산도 사용한다면		: vector
	// 전방삽입이 필요하고 [] 연산도 사용한다면		: deque
	// [] 연산 필요 없고, 중간 삽입 삭제가 많다면	: list


}


#endif