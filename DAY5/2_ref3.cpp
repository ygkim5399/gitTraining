#include <iostream>

// 핵심 : value 매커니즘으로 설계된 함수 에 변수를 
//		  참조로 보내고 싶을때 reference_wrapper 를 사용하게 됩니다.



void foo(int& a) { a = 200; }

// forward_foo : 받은 인자를 foo 로 전달하는 함수
//		 핵심  : 인자를 값 타입으로 전달 받고 있습니다.
template<typename T> 
void forward_foo(T arg)
{
	foo(arg);
}

int main()
{
	int n = 10;
	
//	forward_foo(n);	// 복사본 생성
//	forward_foo(&n);// 복사본 없이 메모리 정보(주소)전달
				    // => 하지만, forward_foo 에서 foo 로 보낼때
					//    int* => int& 로 보낼수 없으므로 에러

//	std::reference_wrapper<int> r = n;	

	// r은 결국 주소를 보관하지만 int& 로 변환도 가능합니다.
//	forward_foo(r); 

	// 위처럼 2줄로 하지 말고, 아래 처럼 하면 됩니다.
	forward_foo( std::ref(n) ); // n 을 참조로 보내달라!!
							    // std::ref() 가 하는일은 결국
								// std::reference_wrapper 를 생성합니다.	
	



	std::cout << n << std::endl; 
}
