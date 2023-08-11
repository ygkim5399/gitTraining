#ifndef DAY3


#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

#include <iomanip>


int main()
{
	double d = 3.141592; // 사용자가 입력했다고 가정

	// C언어로 d를 문자열로 만들어보세요 "d = 3.141592"
	// -> 최선의 방법은?

	char s[8];
	sprintf(s, "%lf", d);		// d의 값이 8자리 이상이면?
	snprintf(s, 8, "%lf", d);	// 오버플로우는 아니지만 "값이 잘리게 됩니다"

	// C++ 스타일
	std::ostringstream oss;
	oss << std::setprecision(10);
	
	oss << "d = " << d; // cout 과 사용법 동일

	std::string s = oss.str();

	std::cout << s << std::endl;

	//-------------
	std::cout << 3.141592 << std::endl; // 3.1415 까지만 출력됩니다.

	std::cout << std::setprecision(10); // 실수 정밀도를 10자리까지 해달라
	

}


#endif