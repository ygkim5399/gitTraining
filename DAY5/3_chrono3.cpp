#include <iostream>
#include <chrono>
#include <thread>
using namespace std::chrono;

int main()
{
	// 앞의 예제에서 "Meter, CentiMeter" 등을 만들었지만
	// C++ 표준에 "시간 관련 타입" 이  이미 만들어져 있습니다.

	// 결국, "duration" 한개를 가지고, 템플릿 인자(단위)만 변경해서
	// => 필요한 모든 타입을 생성한것!!!

	// 1. predefined typedef
	hours		 h(1);     // using hours = duration<int, ratio<3600,1>>;
	minutes      m  = h;
	seconds      s  = h;
	milliseconds ms = h;
	microseconds us = h;
	nanoseconds  ns = h;

	std::cout << h.count() << std::endl;
	std::cout << m.count() << std::endl;
	std::cout << s.count() << std::endl;
	std::cout << ms.count() << std::endl;
	std::cout << us.count() << std::endl;
	std::cout << ns.count() << std::endl;


	// 2. 시간 객체를 생성하는 방법
	std::chrono::seconds s1(10); // 1. 시간 타입을 직접 사용


	auto s2 = 10s;  // C++11, "user define literal" 문법 사용
					// seconds operator""s(10) 이라는 함수가 호출됩니다

	auto m1 = 10min; // std::chrono::minutes m1(10)
	



	// 3. literals( h, min, s, ms, us, ns )
	seconds sec = 1min;

	sec = 1min + 3s; // 63
	sec += 40s;      // 103
	std::cout << sec.count() << std::endl; // 103

}