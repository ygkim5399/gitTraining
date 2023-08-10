#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}

	~People() { std::cout << name << " 파괴" << std::endl; }


	std::shared_ptr<People> bf; // best friend
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	// 스마트 포인터를 사용해도 아래 코드가 있으면 메모리 누수 입니다.
	sp1->bf = sp2;
	sp2->bf = sp1;
}


