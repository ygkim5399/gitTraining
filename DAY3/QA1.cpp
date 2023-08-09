// QA1.cpp
#include <vector>
#include <algorithm>

void foo(int a) {}

void goo(int a)    {}
void goo(double a) {}

int main()
{
	auto p1 = &foo; // ok. foo 이름의 함수는 한개이므로
					//	   컴파일러는 어떤 함수인지 알수 있다
//	auto p2 = &goo;	// error. goo 라는 이름의 함수가 여러개이므로
					//			어느 함수인지 알수 없다
	auto p2 = static_cast<void(*)(int)>(&goo); // ok

	//-------------------------------------
	std::vector<int> v = { 1,2,3,4 };

	// projection 으로 이미 C++ 표준에 있는 단항함수 보내면 안되나요 ?
//	std::ranges::sort(v, {}, &std::abs);

	std::ranges::sort(v, {}, static_cast<int(*)(int)>(&std::abs) );
}

