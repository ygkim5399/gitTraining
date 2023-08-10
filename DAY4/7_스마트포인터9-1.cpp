#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}

	~People() { std::cout << name << " 파괴" << std::endl; }


//	std::shared_ptr<People> bf; // 참조계수를 증가하는 스마트 포인터

//	People* bf;			// raw pointer, 객체를 가르켜도, 참조계수가 증가하는 것은 아님
						// 하지만, 자신이 가리키던 메모리가 파괴되었는지 조사할수 없다.
						// "dangling pointer" 의 위험이 있다	
						// 

	std::weak_ptr<People> bf;	// 참조계수가 증가하지 않는 스마트 포인터
								// 자신이 가리키던 메모리가 파괴되었는지 조사 할수 있다
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2;
		sp2->bf = sp1;

	} 
	if (sp1->bf.expired() )
	{
		std::cout << "가리키던 곳이 파괴됨\n";
	}
	else
	{
		std::cout << "가리키던 곳이 파괴 안됨\n";
	}

}


