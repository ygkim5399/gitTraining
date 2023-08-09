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
	auto p1 = ++begin1(); // int* p1
	auto p2 = ++begin2(); // iterator p2

	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl;
}