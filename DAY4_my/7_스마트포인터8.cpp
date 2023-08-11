#ifndef DAY4

#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

	//std::shared_ptr<People> bf; // 참조계수를 증가하는 스마트 포인터
	People* bf;		// raw pointer, 객체를 가리켜도, 참조계수가 증가한는 것은 아님

};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	// bf 가 raw pointer 이므로 아래처럼 스마트 포인터를 직접 대입할 수 없습니다.
	//sp1->bf = sp2;
	//sp2->bf = sp1;


	sp1->bf = sp2.get();	// get() : 스마트 포인터가 관리하는 객체를 가리킴
	sp2->bf = sp1.get();

	// 위 코드는 이제 메모리 누수 없습니다.
	// 그런데... 다른 문제가 있습니다. 
	// 다음 예제를 생각해 보세요.





}


#endif