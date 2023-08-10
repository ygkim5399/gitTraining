#include <memory>
#include <iostream>

// C++ 표준 스마트 포인터는 3개 입니다
// 1. std::unique_ptr : 자원의 독점 - 하나의 자원을 하나의 스마트 포인터로 사용.
// 2. std::shared_ptr : 자원의 공유 - 하나의 자원을 여러개의 스마트포인터로 사용

// 3. std::weak_ptr : 자원을 가리킬수만 있고, 접근 할수 없음. 
//					  => shared_ptr 의 상호 참조 문제 발생시만 사용

int main()
{
	// 1. 생성. = 는 안되고 ( ) 만 가능
	std::unique_ptr<int> up1(new int); // ok
//	std::unique_ptr<int> up2 = up1;    // error

	// 2. unique_ptr 는 오버헤드가 거의 없습니다.
	std::cout << sizeof(up1) << std::endl;
	std::cout << sizeof(int*) << std::endl;


}