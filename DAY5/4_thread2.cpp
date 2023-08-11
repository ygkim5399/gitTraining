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
}


