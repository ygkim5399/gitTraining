// 5_string_view
#include <iostream>
#include <string>
#include <string_view> // C++17 에서 추가

int main()
{
	std::string s = "to be or not to be";

	std::string		 ss1 = s; // 깊은 복사. 문자열 자체를 복사
	std::string_view sv1 = s; // sv1 이 s가 가진 문자열을 같이 사용하게 됩니다.
							  // => "borrow(대여)" 라고 표현합니다.
							  // => sv1을 통해서는 읽기만 가능합니다.
							  // => 문자열에 대한 소유권이 없습니다.

	std::cout << sizeof(sv1) << std::endl; // 포인터한개 + size 변수 한개 크기

	//------------------------------------------------
	// 참고
	char p1[] = "AAA";
	const char* p2 = "AAA"; // 문자열 자체는 상수 메모리에 있고
	const char* p3 = "AAA";  // p2, p3 가 그곳을 가리키게 됩니다.
							 // 대부분의 환경에서 "p2, p3"는 같은곳을 가리키게 됩니다.

	// 아래 2줄의 메모리 그림을 완벽히 이해 해야 합니다
	std::string		 ss2 = "to be or not to be";
								// => 힙에 문자열의 복사본을 만들어서
								// => ss2가 소유 합니다.
	std::string_view sv2 = "to be or not to be";
								// => sv2가 상수 메모리에 있는 문자열을 
								// => 가리키기만 합니다.	
								// => 문자열 복사본 없습니다.
}
