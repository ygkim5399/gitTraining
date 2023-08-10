#include <iostream>

// 스마트 포인터는 얕은 복사를 해결해야 합니다.
// => 대부분 reference counting 기술을 사용합니다

template<typename T>
class Ptr
{
	T*   obj;
	int* ref;	// 꼭 이렇게 해야 하나요 ?
//	static int ref; // 이렇게 하면 안되나요.. 
					// 안됩니다.

					// Ptr<int> p1 = new int;
					// Ptr<int> p2 = p1; // p1과 p2는 참조 계수 공유

					// Ptr<int> p3 = new int;
					// Ptr<int> p4 = p3; // p3와 p4가 참조 계수 공유
					//					 // 단, 위 p1, p2 와는 다른 참조 계수
					// 
					// 그런데, static 변수로 하면, 모든 Ptr 객체가 공유 합니다.	
					// 참조계수는 힙에 올릴수 밖에 없습니다.

public:
	Ptr(T* p = 0) : obj(p) 
	{
		ref = new int;
		*ref = 1;	
	}

	// 참조개수(reference counting) 기술을 사용하는
	// 복사 생성자
	Ptr(const Ptr& p)
		: obj(p.obj), ref(p.ref)
	{
		++(*ref);
	}

	~Ptr() 
	{ 
		if (--(*ref) == 0)
		{
			delete obj; // 자원 삭제
			delete ref; // 참조계수 관리용 변수도 삭제
		}
	}

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


