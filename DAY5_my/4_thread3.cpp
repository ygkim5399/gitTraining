#ifndef DAY5

#include <iostream>
#include <thread>
#include <mutex>


std::mutex m;	// mutex 뿐 아니라 스레드 동기화에서 사용되는
				// 대부분의 개념을 c++ 표준 클래스로 제공합니다.
				// mutex, semaphore, condition_variable, barrier 등

int shared_data = 10;

void foo()
{
	m.lock();
	// 공유 자원 사용	
	shared_data = 200;	// 변수가 아닌 파일에 쓰는 작업이라고
						//	생각해보세요
						// 여러 스레드가 파일에 접근할 경우 파일이 망가짐 -> 뮤텍스 등으로 방어
	m.unlock();
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}



#endif