#include <iostream>

// int* 한개를 보관하고, ++, * 를 지원하는 클래스
class iterator
{
	int* current;
public:
	iterator(int* p = nullptr) : current(p) {}

	iterator& operator++() { ++current; return *this; }
	int& operator*() { return *current; }
};
// => int* p1 = 100번지
// => iterator p2(100번지)
// => ++p1, *p1;
// => ++p2, *p2;
// => 결국 위 2줄은 같다는 말인데.. 그냥 포인터 사용하지 왜..???
//    iterator 를 만들었나요 ?

// 아래 코드의 main 이 핵심 입니다.

//------------------------------------------------------------
int x[10] = { 1,2,3,4,5,6,7,8,9, 10 };

int* begin1() { return x; }

iterator begin2() { return iterator(x); }

int main()
{
	
	// 실제 주소는 rvalue 입니다. rvalue는 ++ 될수 없습니다.
	// => ++3 이 안되는 것과 같은 이유
	// => 단, 포인터 "변수"는 ++됩니다.

	// 임시객체도 rvalue 입니다.
	// => 그런데, rvalue 라도 멤버 함수는 호출됩니다.
//	auto p1 = ++begin1(); // error. ++(100번지)
	
	auto p2 = ++begin2(); // ok.    ++(임시객체) => 임시객체.operator++()

	// 위 p1 코드 되게 하려면 아래 처럼 하면 됩니다
	auto p1 = std::next(begin1(), 1);

	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl; // 2

//	std::vector<int> v = { 1,2,3,4,5 };

//	auto p3 = ++v.begin(); // vector 의 반복자를 진짜 포인터로 했다면
							// 이코드는 에러 입니다.
							// 하지만 실제 STL 에서는 에러가 아닙니다.
}
// cppreference.com 에서 std::next 검색 해 보세요