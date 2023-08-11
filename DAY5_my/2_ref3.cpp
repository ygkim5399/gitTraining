#ifndef DAY5
#include <iostream>


// 핵심 : value 매커니즘으로 설계된 함수에 변수를 
//		참조로 보내고 싶을 때, reference_wrapper를 사용하게 됩니다.

void foo(int& a) { a = 200; }

// forward_foo	: 받은 인자를 foo 로 전달하는 함수
//	핵심		: 인자를 값 타입으로 전달받고 있습니다. (T arg)

template<typename T> 
void forward_foo(T arg)
{
	foo(arg);
}

int main()
{
	int n = 10;
	
	//forward_foo(n);	// 복사본 생성하기 때문에 n 값에 영향이 없다
	//forward_foo(&n);	// 복사본 없이 메모리정보(주소)전달
						// -> 하지만, forward_foo 에서 foo 로 보낼 때, 
						//		int* -> int& 로 보낼 수 없으므로 에러

	//std::reference_wrapper<int> r = n;
	//// r 은 결국 주소를 보관하지만, int&로 변환도 가능합니다.
	//forward_foo(r);

	// 위 처럼 2줄로 하지말고 아래처럼 하면 됩니다.
	forward_foo(std::ref(n)); // n 을 참조로 보내달라
							// std::ref 가 하는일은 결국
							// reference_wrapper를 생성합니다.

	std::cout << n << std::endl; 
}


#endif