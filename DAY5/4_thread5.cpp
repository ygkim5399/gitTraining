#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;


// 일반 함수라면 아래 처럼 만들게 됩니다
// 그런데, promise future 를 사용하려면 아래 함수를 바로 사용할수 없고
// 변경해야 합니다.
// => 인자로 promise<int>& 추가
int add(int a, int b)
{
	std::cout << "add start" << std::endl;
	std::this_thread::sleep_for(5s);
	return a + b;
}
int main()
{
	// async 모델
	// => 스레드를 고려하지 않은 함수를 스레드로 실행해서
	//    반환값을 얻을수 있는 방법
	std::future<int> ft = std::async(add, 1, 2);

	std::cout << "continue main" << std::endl;

	// 스레드로 수행하는 연산의 결과가 필요 할때
	int ret = ft.get();

	std::cout << "result : " << ret << std::endl;
}
// async 의 의미
// => 기존에 만들어둔 함수를 변경하지 않고도,
// => 스레드로 실행후 결과를 받을수 있게 한것!!!


// std::async       : 기존 함수를 변경하지 않고, 스레드로 수행후
//					  결과를 얻게 한것
//					  내부적으로 "std::thread, promise, future"사용
//----------------------------------------------------------
// promise&future   : 스레드에서 값을 꺼내는 방법을 제공한것
//					  스레드 생성은 "std::thread" 사용
//----------------------------------------------------------
// std::thread		: 스레드를 만드는 가장 기본 적인 방식
//					  스레드 함수 결과를 얻으려면 직접 코드 장성

// openmp : C++11 표준이 나오기 전부터, 스레드를 지원하기 위한 오픈소스
//			