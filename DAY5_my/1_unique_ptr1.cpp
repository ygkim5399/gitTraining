#ifndef DAY5

#include <iostream>

template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
	~Ptr() { delete obj; }

	// ~ 컴파일러에게 복사 생성자를 만들지 못하게 한다.
	Ptr(const Ptr&) = delete;
	Ptr operator=(const Ptr&) = delete;	// 복사를 금지하면
										// 대입도 금지하는 것이 관례
};

int main()
{
	Ptr<int> p1 = new int;
	*p1 = 100;
	std::cout << *p1 << std::endl;

	//Ptr<int> p2 = p1; // 이 코드 때문에 runtime error 발생
	Ptr<int> p2 = p1;	// Ptr(const Ptr&) = delete 추가하여
						//	복사 생성자가 없으므로 컴퍼알 에러
						// 이렇게 쓰고싶으면 shared_ptr 을 사용
}


#endif