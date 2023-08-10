#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}

	~People() { std::cout << name << " 파괴" << std::endl; }


	//	std::shared_ptr<People> bf; // 참조계수를 증가하는 스마트 포인터
	People* bf;						// raw pointer, 객체를 가르켜도, 참조계수가 증가하는 것은 아님
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2.get();
		sp2->bf = sp1.get();
	}

	if (sp1->bf != nullptr)
	{
		auto name = sp1->bf->name; // !!?? 잘 생각해 보세요..
	}

}


