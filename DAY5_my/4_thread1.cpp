#ifndef DAY5

#include <iostream>
#include <thread> 
#include <chrono>
using namespace std::literals; // 이 안에 s, ns, us, min 등의 
								// 리터럴 접미사 제공

// this_thread namespace 
// -> 스레드 관련 몇가지 함수 제공

int main()
{
	std::cout << std::this_thread::get_id();

	std::this_thread::sleep_for(3s);
	//std::this_thread::sleep_until(시간); // 시간까지 재우기
	std::this_thread::yield();	// 현재 스레드 실행흐름을
								// 중단하고, 다른 스레드 실행
}


#endif