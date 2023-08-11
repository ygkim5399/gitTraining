#ifndef DAY4

#include <iostream>
#include <unordered_set>
#include "show.h"
struct People
{
	std::string name;
	int  age;

	People(std::string n, int a) : name(n), age(a) {}
};

// set 에 보관하려면 : 크기비교만 가능하면 됩니다.
// unordered_set :	1. 사용자 정의 타입에 대한 해쉬 함수
//					2. 사용자 정의 타입의 2개 객체에 대해서 상등을 조사하는 함수 객체 

struct PeopleHash {
	inline int operator()(const People& p) const {
		std::hash<int> hi;
		std::hash<std::string> hs;

		return hi(p.age) + hs(p.name);
	}
};

struct PeopleEqual {
	inline bool operator()(const People& p1, const People& p2) const {
		return p1.name == p2.name && p1.age == p2.age;
	}
};
int main()
{
	//std::unordered_set<People> s;
	//std::unordered_set<People, std::hash<People>, std::equal_to<People>, std::allocator<People>> s;
	std::unordered_set<People, PeopleHash, PeopleEqual> s;

	// 그런데
	// hash<int> ,hash<double>등은 표준에서 지원하지만
	// hash<People> 은 표준에서 지원하지 않습니다.
	// 즉, 사용자가 만들어서 전달해야합니다.

	s.emplace("kim", 20); // s.insert( People("kim",20))
	s.emplace("lee", 25);
	s.emplace("park", 30);	// People("park", 30) 객체를 해쉬함수에 전달

	People peo("lee", 25);
	auto p = s.find( peo );

	std::cout << (*p).name << std::endl;
}

#endif