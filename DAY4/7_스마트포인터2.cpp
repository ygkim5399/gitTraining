#include <iostream>

// 1. 보통 template 으로 만들게 됩니다.

template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}

	~Ptr() { delete obj; }

	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};

int main()
{
	Ptr<int> p1 = new int; // int* p1 = new int;
	*p1 = 20;
	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; // 이 한줄의 문제를 해결해야
					  // 제대로 만든 스마트 포인터 입니다.
}


