#include <iostream>

// 스마트 포인터는 얕은 복사를 해결해야 합니다.
// => 대부분 reference counting 기술을 사용합니다

template<typename T>
class Ptr
{
	T* obj;
	int* ref;
public:
	Ptr(T* p = 0) : obj(p) 
	{
		ref = new int;
		*ref = 1;	
	}

	~Ptr() { delete obj; }

	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};



int main()
{
	Ptr<int> p1 = new int; 
	*p1 = 20;
	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; 
}


