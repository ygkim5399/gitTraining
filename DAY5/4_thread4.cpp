#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// 일반 함수라면 "결과를 반환값" 으로 전달 합니다.
int add(int a, int b)
{
	return a + b;
}

// 스레드로 수행한 함수의 결과를 주스레드에서 얻으려면
// => 1. 전역변수 등으로 공유 하거나 
// => 2. promise & future 기능을 사용. <== 권장..

// promise & future

void foo()
{
	std::this_thread::sleep_for(5s);
}

int main()
{
	std::thread t(&foo);
						
	t.join();
}


