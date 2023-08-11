#ifndef DAY3


#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

#include <iomanip>


int main() {
	std::ostringstream oss; // 문자열에서 출력 객체
	// std::istringstream iss; // 문자열에서 입력

	std::istringstream iss("to be or not to be");


	std::string s;
	iss >> s; // iss 에서 한 단어 입력
	
	while (iss >> s) // 비어있으면 false, 있으면 true
		std::cout << s << std::endl;


	// 결국 위 코드는 "한개의 문장에서 단어별로 분리해서 꺼내고 있는것"
	// -> C언어의 strtok() 기능을 수행하고 있는 것

	std::cout << s << std::endl;
}

#endif