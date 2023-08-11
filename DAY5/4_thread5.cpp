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


