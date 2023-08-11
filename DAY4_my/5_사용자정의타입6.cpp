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

// set �� �����Ϸ��� : ũ��񱳸� �����ϸ� �˴ϴ�.
// unordered_set :	1. ����� ���� Ÿ�Կ� ���� �ؽ� �Լ�
//					2. ����� ���� Ÿ���� 2�� ��ü�� ���ؼ� ����� �����ϴ� �Լ� ��ü 

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

	// �׷���
	// hash<int> ,hash<double>���� ǥ�ؿ��� ����������
	// hash<People> �� ǥ�ؿ��� �������� �ʽ��ϴ�.
	// ��, ����ڰ� ���� �����ؾ��մϴ�.

	s.emplace("kim", 20); // s.insert( People("kim",20))
	s.emplace("lee", 25);
	s.emplace("park", 30);	// People("park", 30) ��ü�� �ؽ��Լ��� ����

	People peo("lee", 25);
	auto p = s.find( peo );

	std::cout << (*p).name << std::endl;
}

#endif