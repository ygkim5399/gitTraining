#include <iostream>
#include <thread> 

void foo(int n, double d)
{
	std::cout << "foo" << std::endl;
}

class Test
{
public:
	void goo(int n, double d)
	{
		std::cout << "goo" << std::endl;
	}
};

int main()
{
	// 1. 스레드를 생성하는 방법
	std::thread t(&foo, 1, 3.4 ); // 이순간 스레드가 생성되어서 foo 실행

	// 2. 스레드를 생성한 경우, 반드시 아래 2중에 한가지작업을 해야 합니다.
	t.join();	// 스레드 종료를 대기 하거나
//	t.detach(); // 새로운 스레드를 현재스레드에서 분리


	// 3. 어떠한 함수라도 스레드로 수행 가능
	// C언어 스레드 : 스레드로 수행하는 함수는 "반드시 인자가 void* 한개"이어야 한다.
	// C++ std::thread : 일반함수, 멤버 함수, 람다표현식, 함수객체

	Test test;
	std::thread t2(&Test::goo, &test, 1, 3.4);
					// test.goo(1, 3.4)

	t2.join();
}

// 스레드의 최대 갯수!!
// => 스레드 별로 스택을 따로 사용합니다.
// => 보통 스택은 1M 를 사용합니다.
// => 스레드는 이론상 무한히 만들수 있지만
//    스레드 2000천개라면 2000* 1M => 메모리가 부족합니다. ..
