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


int x[10] = { 1,2,3,4,5,6,7,8,9, 10 };

int* begin1() { return x; }

iterator begin2() { return iterator(x); }

int main()
{
	auto p1 = begin1();
	auto p2 = begin2();

	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl;
}