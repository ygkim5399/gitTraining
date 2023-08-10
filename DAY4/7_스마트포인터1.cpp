#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};

// 스마트 포인터
// 개념 : 임의 타입의 객체가 다른 타입의 포인터 역활을 하는 것
// 원리 : -> 와 * 연산자를 재정의 해서 포인터 처럼 동작하게 하는 것
// 
// 장점 : raw pointer 가 아닌 객체(클래스 타입) 입니다.
//		  생성/복사/대입/소멸의 모든 과정에서 약속된 함수가 호출됩니다
//        추가적인 작업수행이 가능합니다.
//        대표적인 활용이 소멸자에서는 자동 삭제 기능


// 이 예제의 핵심은 아래 "Ptr" 입니다.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}
	
	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }  // 반환값을 참조로 해야 복사본 생성 안됩니다

//	Car operator*() { return *obj; } // 이렇게 하면 "*obj" 자체가 반환되지 않고
									 // 복사본이 반환됩니다.(임시객체 학습)
};

int main()
{
	// Car* p = new Car; // C++은 new 를 하면 반드시 사용자가 delete 해야 합니다 
						 // raw pointer 사용시 p가 파괴될때 아무일도 있어나지 않습니다.
						  

	// p는 Ptr 타입의 객체입니다.
	Ptr p = new Car; // Ptr p( new Car ) 로 놓고 생각해 보세요
					 // p는 raw pointer 가 아닌 객체 입니다.



	// Ptr타입의 객체 p가 마치 Car* 처럼 사용됩니다.
	p->Go(); // ( p.operator->() ) Go() 의 모양인데,
			 // ( p.operator->() )->Go() 실제로는 이렇게 해석됩니다.
	(*p).Go(); // 이표기법도 지원해야 합니다.
}


