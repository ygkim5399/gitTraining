#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity 개념
int main()
{
	std::vector<int> v(10, 0);

	v.resize(7);	// 크기 줄이는 코드...어떻게 구현했을까요 ?
					// => 기존 메모리 계속 사용하고
					// => size 변수만 변경합니다.

	std::cout << v.size()     << std::endl;	// 7
	std::cout << v.capacity() << std::endl;	// 10

	v.push_back(5); // 끝에 한개(5) 추가
					// capacity > size 이므로
					// 이 연산은 메모리 재할당이 필요 없습니다
					// 아주 빠르게 동작합니다.

	std::cout << v.size() << std::endl;	    // 8
	std::cout << v.capacity() << std::endl;	// 10					

	v.shrink_to_fit(); // size == capacity 로 해달라
					   // 결국 이순간 8개 크기 메모리 재할당해서 사용

	std::cout << v.size() << std::endl;	    // 8
	std::cout << v.capacity() << std::endl;	// 8	

	v.push_back(5); // 끝에 한개 추가
					// size == capacity 상태 이므로 버퍼(메모리) 재할당 필요
					// 현재 8개 인데, 9개 크기를 할당하는 것이 아니라
					// VS  : 기존 크기 * 1.5 로 키우고
					// G++ : 기존 크기 * 2   로 키우게 됩니다.

	std::cout << v.size() << std::endl;	    // 9
	std::cout << v.capacity() << std::endl;	// 12

	v.resize(15);	// size = 15 로 되지만
					// capacity = 기존 capacity(12) * 1.5 => 18

	std::cout << v.size() << std::endl;	    // 9
	std::cout << v.capacity() << std::endl;	// 18
	//------------------------------------------------------

//	v.clear(); // 이 코드가 진짜로 메모리를 제거할까요 ?
			   // size 만 0 으로 
	v.erase(v.begin(), v.end()); // 역시, size 만 0으로 

	std::cout << v.size() << std::endl;	    // 0
	std::cout << v.capacity() << std::endl;	// 18

	// 진짜 메모리를 지우려면
	v.clear(); // clear 하고
	v.shrink_to_fit(); // 실제 메모리 제거

	std::cout << v.size() << std::endl;	    // 0
	std::cout << v.capacity() << std::endl;	// 0

}




