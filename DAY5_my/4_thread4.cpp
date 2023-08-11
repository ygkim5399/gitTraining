#ifndef DAY5
#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// 일반 함수라면 "결과를 반환값"으로 전달합니다.
int add(int a, int b) {
	return a + b;
}

// 스레드로 수행한 함수의 결과를 주스레드에서 얻으려면
// 1. 전역변수 등으로 공유하거나 (복잡한 내용이 많다..)
// 2. promise & future 기능을 사용 <-- 권장

// promise & future

// 1. 스레드 함수는 promise 객체를 참조로 받아야합니다.
void foo(std::promise<int>& p)
{
	std::this_thread::sleep_for(5s);

	// 2. 주 스레드에 결과를 알리고싶을 때, promise 의 set_value 사용
	p.set_value(100);
}

int main()
{
	// 3. 주 스레드에서 promise 객체를 생성하고 future 를 꺼냅니다.
	std::promise<int> p;
	std::future<int> ft = p.get_future();

	// 4. 스레드만들때, promise 객체를 참조로 전달해야 합니다.
	std::thread t(&foo, std::ref(p));

	// 주스레드는 자신이 하고싶은 작업을 하다가 ..
	std::cout << "continue main" << std::endl;

	// 5. 스레드가 수행하는 연산을 결과가 필요하면
	//		future 객체를 통해서 얻어내면 됩니다.

	int ret = ft.get();	// 1. 스레드가 set_value 했다면 바로 꺼내고
						// 2. 아직 안했다면 대기상태
						// ft.wait(2s) 등으로 특정시간만큼 대기도 가능

	std::cout << ret << std::endl;
						
	t.join();
}


#endif