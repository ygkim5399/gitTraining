#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
using namespace std::chrono;

// system_clock : 현재 시간을 얻을때 사용하는 클래스, non monotonic clock
// 
// time_point   : 시간의 시작점과 duration<>을 보관하는 클래스
//				  ex) 1970년 1월 1일 기준 16880 시간 경과
//					"언제 부터, 얼마나 경과했나(값, 단위)"

// epoch time : 기준점을 1970년 1월 1일 을 기준으로 하는 값

int main()
{
	// 1. 현재 시간을 얻는 방법
	system_clock::time_point tp = system_clock::now(); // now()는 static 멤버함수
								// std::chrono::system_clock::now()



	// 2. time_point => duration 얻어내기... 정밀도가 낮아지는 경우 명시적 캐스팅 필요..
	nanoseconds nanosec = tp.time_since_epoch();
					// => 현재가 1970년 1월 1일 을 기점으로 "몇 나노초"가 경과했는가

	seconds     sec     = duration_cast<seconds>(tp.time_since_epoch());
	
	std::cout << nanosec.count() << std::endl;
	std::cout << sec.count() << std::endl;



	using days = duration<int, std::ratio<60 * 60 * 24>>;
	std::cout << (duration_cast<days>(tp.time_since_epoch())).count() << std::endl;


	// 3. time_point => 칼린더 형태의 날짜로 변경하기
	time_t t = system_clock::to_time_t(tp); // 1. time_point => struct time_t

	char s[32] = { 0 };
	ctime_s(s, 32, &t);		// time_t => char[]

	std::cout << s << std::endl;


	// C++20
//	std::string s = std::format("{:%Y%m%d%H%M}", tp);
//	std::cout << s << '\n';
}



