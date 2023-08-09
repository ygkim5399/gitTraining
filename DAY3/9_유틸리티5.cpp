#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>
#include <iomanip>
int main()
{
	std::ostringstream oss; // 문자열에 출력 객체
//	std::istringstream iss; // 문자열에서 입력


	std::istringstream iss("to be or not to be");


	std::string s;

	while(iss >> s) // iss 에서 한단어 입력
		std::cout << s << std::endl;

	// 결국 위 코드는 "한개의 문장에서 단어별로 분리해서 꺼내고 있는것"
	// => C언어의 strtok() 기능을 수행하고 있는것
}
