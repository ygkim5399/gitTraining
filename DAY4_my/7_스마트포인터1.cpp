#ifndef DAY4

#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};

// 스마트 포인터
// 개념 : 임의 타입의 객체가 다른 타입의 포인터 역할을 하는 것
// 원리 : -> 와 * 연사자를 재정의해서 포인터처럼 동작하게 하는것
// 장점 : raw pointer 가 아닌 객체( 클래스 타입) 입니다.
		// 생성/복사/대입/소멸의 모든 과정에서 약속된 함수가 호출됩니다.
		// 추가적인 작성수행이 가능합니다.
		// 대표적인 활요이 소멸자에서는 자동삭제 기능


// 이 예제의 핵심은 아래 "Ptr"
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}
	~Ptr() { delete obj; }
	Car* operator->() { return obj; }
	//Car operator*() { return *obj; } // 이렇게 하면 "*obj" 자체가 반환되지 않고 복사본이 반환됩니다. (임시객체 학습) 
	Car& operator*() { return *obj; }	// 반환값을 참조로해야 복사본 생성 안됩니다. (return by reference)
};


int main()
{
	//Car* p = new Car; // C++ 은 new 를 하면 반드시 사용자가 delete 해야 합니다. 
						// raw pointer 사용 시 p 가 파괴될 때, 아무일도 일어나지 않습니다.
	// 여기서 block 을 벗어날때 p만 파괴된다. 

	// p는 Ptr 타입의 객체입니다.
	Ptr p = new Car; // Ptr p (new Car) 로 놓고 생각해보세요
						// p 는 raw pointer 가 아닌 객체입니다. 
						// (소멸자를 불리기에 소멸자에 delete가 있다면 직접 delete 할 필요가 없다)

	// Ptr 타입의 객체 p 가 마치 Car* 처럼 사용됩니다.
	p->Go(); // ( p.operator->() ) Go() 의 모양인데
			//( p.operator->() )->Go() 실제로는 이렇게 해석됩니다.

	(*p).Go(); // 이 교기법도 지원해야 합니다. 


}


#endif