#ifndef DAY5
// 5_string_view
#include <iostream>
#include <string>
#include <string_view> // C++17 에서 추가

int main()
{
	std::string s = "to be or not to be";

	std::string		 ss1 = s;	// string 은 기본적으로 깊은 복사 (문자열 자체를 복사)
	std::string_view sv1 = s;	// sv1 이 s 가 가진 문자열을 같이 사용하게 됩니다. => borrow(대여)라고 표현합니다. 
								// sv1을 통해서는 읽기만 가능합니다.
								// 문자열에 대한 소유권이 없습니다.
								// string_view 는 s가 가지고 있는 문자열 주소를 가짐 + 문자열의 길이 저장
						

	std::cout << sizeof(sv1) << std::endl;	// 포인터한개 + size 변수 한개 크기

	//-----------------------------------------------
	// 참고
	const char p1[] = "AAA";	// 배열이므로 스택에 생성 (AAA+null)4자
	const char* p2	= "AAA";	// 포인터이므로 주소를 담고 있다. 주소의 위치에는 "AAA"라는 문자가 있다. 
								// AAA 라는 문자는 상수메모리에 있다. -> const 를 붙여야 한다.

	const char* p3	= "AAA";	// p3 의 경우 "AAA" 라는 상수메모리 주소를 가져온다. = p2 와 동일한 메모리
	// 문자열 자체는 상수메모리에 있고 p2, p3 가 그곳을 가리키게 됩니다.
	// 대부분의 환경에서 p2, p3 는 같은 곳을 가리키게 됩니다.

	
	// 아래 2줄의 메모리 그림을 완벽히 이해해야 합니다.
	std::string		 ss2 = "to be or not to be";
						//-> 힙에 문자열의 복사본을 만들어서 
						//-> ss2 가 소유합니다.
	std::string_view sv2 = "to be or not to be";
						//-> sv2가 상수메모리에 있는 문자열을
						//-> 가리키기만 합니다.
						//-> 문자열 복사본없습니다.

	// string view 와 const char* 의 차이
	// 철학상은 동일 
	//하지만 string_view 는 멤버함수가 있고 문자열의 길이가 있다.
}


#endif