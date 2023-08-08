// 3_함수객체1
#include <iostream>

// 함수 객체 ( function object )
// => () 연산자를 재정의해서 "함수 처럼 사용가능"한 객체
// => functor 라고도 합니다.

// 왜 ?? 일반 함수를 사용하면 되는데, 함수객체를 사용하나요 ?
// => 장점이 너무 많습니다.
// 1. 특정한 상황에서 일반 함수보다 함수객체가 빠릅니다.
// 2. 지역변수를 캡쳐할수 있는 능력이 있습니다.(closure 만들기)
// 3. 그외에도 여러 장점이 있습니다.

// C++20 부터는 거의 모든 표준이 전부함수 객체 입니다
// C++98 std::max()         : 함수
// C++20 std::ranges::max() : 함수가 아닌 함수 객체 입니다.

// 파이썬도 함수객체 만들어 사용하는경우 많습니다.
// __call__ 스페셜 함수.

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	Plus p;		// p는 함수가 아닌 "객체" 입니다.

	int n1 = p(1, 2);	// 객체인 p를 함수 처럼 사용합니다.
						// "함수 객체" 라고 부릅니다.
	int n2 = p.operator()(1, 2);	// 위 코드는 컴파일러에 의해서
									// 이렇게 변경됩니다.
}
