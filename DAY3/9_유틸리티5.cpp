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

	iss >> s; // iss 에서 한단어 입력

	std::cout << s << std::endl;
}
