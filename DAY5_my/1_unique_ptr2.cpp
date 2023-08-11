#ifndef DAY5

#include <memory>
#include <iostream>

// c++ 표준 스마트 포인터는 3개 입니다.
// 1. std::unique_ptr : 자원의 독접 - 하나의 자원을 하나의 스마트 포인터로 사용 - 가볍고 성능저하가 거의 없다. (raw pointer 와 거의 유사)
// 2. std::shared_ptr : 자원의 공유 - 하나의 자원을 여러개의 스마트 포인터로 사용
// 3. std::weak_ptr	  : 자원을 가리킬 수만 있고, 접근할 수 없음.
//						-> shared_ptr 의 상호참조 문제 발생시만 사용


int main()
{
	// 1. 생성. =는 안되고 () 만 가능
	std::unique_ptr<int> up1(new int);	// ok
	//std::unique_ptr<int> up2 = up1;		// error

	// 2. unique_ptr 은 오버헤드가 거의 없습니다. - 거의 모든 함수가 inline 치환
	std::cout << sizeof(up1) << std::endl;
	std::cout << sizeof(int*) << std::endl;

}

#endif