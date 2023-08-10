#include <iostream>
#include <set>
#include "show.h"

struct People
{
	std::string name;
	int  age;

	People(std::string n, int a) : name(n), age(a) {}
};

// sequence container(vector, list, deque)
// => ���� �����ڿ� �Ҹ��ڸ� ������ ���尡���մϴ�.

// set �� ����� ���� Ÿ���� ��������
// 1. ����� ���� Ÿ���� < ������ �����ϰų� 
// 2. People ��ü 2���� ���Ҽ� �ִ� �Լ� ��ü�� ���� <= �Ϲ����� ���

struct PeopleCompare
{
	inline bool operator()(const People& p1, const People& p2) const
	{
		return p1.age < p2.age;
	}
};

int main()
{
//	std::set<People> s; // error
//	std::set<People, std::less<People>, std::allocator<People>> s;
					// => less �� People��ü 2���� ���ؼ� < ���� ����

	std::set<People, PeopleCompare> s;

	// ���� :std::sort(first, last, �����Լ�)


	s.emplace("kim", 20); // s.insert( People("kim",20))
	s.emplace("lee", 25);
	s.emplace("park", 30);

}

