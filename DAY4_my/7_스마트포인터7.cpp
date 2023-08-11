#ifndef DAY4

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

	// 스마트 포인터를 사용해도 아래 코드가 있으면 메모리 누수입니다.
	sp1->bf = sp2;
	sp2->bf = sp1;
	// reference counting 이 제대로 제거되지 않아 delete가 되지 않는다 

	// 위와 같은 코드를 
	// "상호참조", "원형참조(cycle reference)" 등의 용어로 표현합니다.
	// -> 이런 현상이 발생되는 메모리가 삭제되지 않습니다.



}


#endif