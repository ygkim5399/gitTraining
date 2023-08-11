#ifdef DAY4

#include <string>
#include <iostream>
#include <memory>

struct People
{
	std::string name;

	People(std::string n) : name(n) {}
	~People() { std::cout << name << " 파괴" << std::endl; }

	//std::shared_ptr<People> bf;	// 참조계수를 증가하는 스마트 포인터
	//People* bf;						// raw pointer, 객체를 가리켜도, 참조계수가 증가한는 것은 아님
									// 하지만, 자신이 가리키던 메모리가 파괴되었는지 조사할 수 없다.
									// "dangling pointer" 의 위험이 있다.

	std::weak_ptr<People> bf;		// 참조계수가 증가하지 않는 스마트 포인터
									// 자신이 가리키던 메모리가 파괴되었는지 조사할 수 있다.

};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));


		sp1->bf = sp2;
		sp2->bf = sp1;
	}

	//if (sp1->bf.expired()) { // expired 조사할 필요가 없다. 어차피 아래 if(sp3) 를 조사하기 때문
	//	std::cout << "가리키던 곳이 파괴됨\n";
	//}
	//else {
	//	std::cout << "파괴 안됨 \n";
		
		// 접근하려면 shared_ptr 만들어서 사용
	// sp1->bf, 즉, weak 로 객체 접근하려면 결국 아래처럼하면 됩니다.
		std::shared_ptr<People> sp3 = sp1->bf.lock();
		if (sp3) {
			auto name = sp3->name;
		}
	//}



}


#endif