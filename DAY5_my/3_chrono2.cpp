#ifndef DAY5

#include <iostream>
#include <chrono>

// chrono : 시간 관련 라이브러리
// chrono 를 이해하려면
// 1. std::ratio 를 이해하고 
// 2. std::chrono::duration 을 이해해야 합니다.



// duration 정의 : 
//	-> 값 한개만 보관하는 타입
//	-> 템플릿 인자로 "저장하는 값의 타입, 단위" 를 전달합니다.
//	-> 특정 단위의 갯수(tick count)를 표현하는 자료구조
//				  10초 => 1초의 10개
//					   => 1/1000초의 10000개..

int main()
{
	// 1. duration 사용
	// -> 템플릿 인자의 타입이 다르면 다른 타입이므로 아래 d1, d2 는 다른 타입입니다.
	// -> 즉, 저장하는 단위가 다른것은 다른 타입이 됩니다.
	std::chrono::duration<int, std::ratio<1, 100>>  d1(2);	// 1/100 * 2
	std::chrono::duration<int, std::ratio<1, 1000>> d2(d1);	//20보관

	std::cout << d1.count() << std::endl; // 2
	std::cout << d2.count() << std::endl; // 20

	// 2. 이제 duration 을 가지고 각각의 단위를 별명으로 만들면 됩니다. 
	using Meter			=	std::chrono::duration<int, std::ratio<1, 1>>;
	using CentiMeter	=	std::chrono::duration<int, std::ratio<1, 100>>;
	//using MilliMeter	=	std::chrono::duration<int, std::ratio<1, 1000>>;
	using MilliMeter	=	std::chrono::duration<int, std::milli>;
	//using KiloMeter		=	std::chrono::duration<int, std::ratio<1000, 1>>;
	using KiloMeter		=	std::chrono::duration<int, std::kilo>;

	Meter m(3000); // 3000m
	CentiMeter cm = m; // 300000cm

	std::cout << cm.count() << std::endl; // 300000

	// Meter -> CentiMeter	변환 : 데이터 손실이 없으므로 캐스팅 필요 없음
	// Meter -> KiloMeter	변환 : 데이터 손실 가능성이 있습니다. 캐스팅 필요

	//KiloMeter km = m; // error
	KiloMeter km = std::chrono::duration_cast<KiloMeter>(m);

	std::cout << km.count() << std::endl;

}
#endif