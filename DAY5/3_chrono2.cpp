#include <iostream>
#include <chrono>

// chrono : 시간 관련 라이브러리
// chrono 를 이해 하려면
// 1. std::ratio 를 이해 하고
// 2. std::chrono::duration 을 이해 해야 합니다.


// duration 정의  
// => 값 한개만 보관하는 타입
// => 템플릿 인자로 "저장하는 값의 타입, 단위"를 전달 합니다.
// => 특정 단위의 갯수(tick count)를 표현하는 자료구조
//		 10초 => 1초의 10개
//		      => 1/1000초의 10000개..

int main()
{
	// 1. duration 사용
	std::chrono::duration<int, std::ratio<1, 100>>  d1(2); // 1/100 * 2
	std::chrono::duration<int, std::ratio<1, 1000>> d2(d1);// 20보관

	std::cout << d1.count() << std::endl; // 2
	std::cout << d2.count() << std::endl; // 20

}
