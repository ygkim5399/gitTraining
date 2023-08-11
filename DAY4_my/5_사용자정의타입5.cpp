#ifndef DAY4

#include <iostream>
//#include <unordered_set>
#include <set>
#include "show.h"
struct People
{
	std::string name;
	int  age;

	People(std::string n, int a) : name(n), age(a) {}
};

// sequence container (vector, list, deque)
// -> 복사 생성자와 소멸자만 있으면 저장가능합니다.

// set 에 사용자 정의 타입을 넣으려면
// 1. 사용자 정의 타입이 < 연산을 지원하거나
// 2. People 객체 2개를 비교할 수 있는 함수 객체를 전달 <== 일반적인 방식
//

struct PoepleCompare {
	inline bool operator()(const People& p1, const People& p2) const {
		return p1.age < p2.age;
	}
};



int main()
{
	//std::set<People> s; // error
	//std::set<People std::less<People>, std::allocator<People>> s;
					// less 는 People 객체 2개에 대해서 < 연산 수행

	std::set<People, PoepleCompare> s;
	// 참고 : std::sort(first, last, 이항함수)


	s.emplace("kim", 20); // s.insert( People("kim",20))
	s.emplace("lee", 25);
	s.emplace("park", 30);


}











#endif