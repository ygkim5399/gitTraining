#ifndef DAY4

#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

	//std::shared_ptr<People> bf;	// 참조계수를 증가하는 스마트 포인터
	People* bf;						// raw pointer, 객체를 가리켜도, 참조계수가 증가한는 것은 아님
									// 하지만, 자신이 가리키던 메모리가 파괴되었는지 조사할 수 없다.
									// "dangling pointer" 의 위험이 있다.
									// -> 스마트 포인터와 raw pointer 와 섞지말것. 

};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));


		sp1->bf = sp2.get();	// get() : 스마트 포인터가 관리하는 객체를 가리킴
		sp2->bf = sp1.get();
	}	// 이 순간 sp2 파괴
		// sp2가 가리키는 "lee" 객체도 파괴


	// sp1->bf 는 0이 아니지만, 이미 파괴된 메모리를 가리키게 됩니다.
	if (sp1->bf != nullptr) {
		auto name = sp1->bf->name; // !!?? 잘 생각해 보세요

	}



}


#endif