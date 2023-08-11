#include <iostream>
#include <functional>
using namespace std::placeholders;

void foo(int a, int& r) { r = 200; }

int main()
{
	std::function<void(int)> f;

//	{
	int n = 10;

//	f = std::bind(&foo, _1, n);  
				// => n 의 값(복사본)을 보관하고 있게됩니다.
				// => 그래야 n이 파괴 되어도 안전하게 사용가능합니다.

	f = std::bind(&foo, _1, std::ref(n) );
				// => n을 참조로 보관해달라
				// => 정확히는 reference_wrapper 로 보관
				// => 즉, 주소를 보관, reference_wrapper => int& 변환도 지원
				// => 이 경우, f 를 사용하는 동안에는 n은 파괴되면 안됩니다(사용자책임)
//	}

	f(0); // 1. foo(0, n);
		  // 2. foo(0, 10);

	std::cout << n << std::endl;
}