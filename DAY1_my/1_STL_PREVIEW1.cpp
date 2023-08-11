// 1_STL_PREVIEW1
#include <iostream>
#include <string>

int main()
{
	char s1[] = "Hello";
	char s2[] = "Hello";

	if (s1 == s2) {} // 문자열의 주소를 비교이므로 항상 false

	/// Updated
	if (strcmp(s1, s2) == 0) {} // same 
	/// Updated


	//s2 = s1; // 의도 : 문자열 대입, 실제 : compile error 배열의 이름에 대입할 수 없다. 
	
	/// Updated
	//strcpy(s2, s1); 
	// or
	strcpy_s(s2, strlen(s1), s1);
	/// Updated


	// c++ 은 std::string 을 사용하면 편리
	// => 문자열을 정수형 변수처럼 연산가능
	std::string s3 = "Hello";
	std::string s4 = "Hello";

	if (s3 == s4) {}
	//s3 = s4;
	s3 = s4 + s4;
	std::cout << s3 << std::endl;

	//s3 = s4 * 20;  // 파이썬처럼 불가능 하지만 만들 수 있다. (operator*() 재정의) 

}