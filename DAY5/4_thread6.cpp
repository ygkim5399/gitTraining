#include <iostream>
#include <thread>

// atomic

//int x = 0;

//void foo()
//{
//	x = x + 1;	// 이 코드는 멀티 스레드에서는 안전하지 않습니다.

//	m.lock();	// 이렇게 해도 되지만,
//	x = x + 1;	// 단순히 1증가를 위해
//	m.unlock(); // mutex 를 사용하는 것은 오버헤드가 큽니다.

	// 이런 경우는 변수를 안전하게 1증가하기위해 
	// OS 가 아닌 CPU 가 제공하는 명령을 사용하는 것이 좋습니다
	// lock 명령 : 인텔 CPU 명령, 하나의 CPU 가 사용하는 변수를 다른 CPU가
	//			   접근 못하게
	/*
	__asm
	{
		lock inc x 
	}
	*/
//}

std::atomic<int> x = 0; // 이 클래스가 위와 같은 개념으로 만든 클래스

void foo()
{
//	x.fetch_add(1);		// lock 명령 사용
	++x; // 위와 동일
}



int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	t1.join();
	t2.join();
}