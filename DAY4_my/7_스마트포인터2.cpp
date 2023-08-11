#ifndef DAY4

#include <iostream>

// 1. 보통 template 으로 만들게 됩니다.

template <typename T>
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
	Ptr<int> p1 = new int; // int* p1 = new int
	*p1 = 20;

	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; // 이 한줄의 문제를 해결해야
					// 제대로 만든 스마트 포인터 입니다. 

	Ptr<int> p2 = p1; // p1과 p2 는 같은 주소를 가리키고 있다. -> p2 가 제거될 때, 주소 delete, 이후 p1이 제거될 때 제거할 주소가 없다....
					//	-> 참고할때마다 count 한다.

}


#endif