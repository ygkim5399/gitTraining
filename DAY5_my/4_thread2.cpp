#ifndef DAY5

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
	std::thread t(&foo, 1, 3.4); // 이 순간 스레드가 생성되어서 foo 실행

	// 2. 스레드를 생성한 경우, 반드시 아래 2중에 한가지 작업을 해야합니다.
	t.join();	// 스레드 종료를 대기하거나
	//t.detach(); // 새로운 스레드를 현재 스레드에서 분리

	// 3. 어떠한 함수라도 스레드로 수행 가능
	// C언어 스레드		: 스레드로 수행하는 함수는 반드시 인자가 void* 한개이어야 합니다.
	// C++ std::thead	: 일반함수, 멤버함수, 람다표현식, 함수객체 모두 가능

	Test test;
	std::thread t2(&Test::goo, &test, 1, 3.4);
					// test.goo(1, 3.4)
	t2.join();


}

// 스레드의 최대 갯수!!
// -> 스레드 별로 스택을 따로 사용합니다.
// ->보통 스택은 1M을 사용합니다.
// -> 스레드는 이론상 무한히 만들 수 있지만
//		스레드 2000천개라면 2000*1M -> 메모리가 부족합니다.


// cpu 가 한개라도 여러개 생성가능하지만
// 수행 후 멈추고 다른 수행 후 멈추고.. 반복하기때문에 효율이 좋지는 않다.

#endif