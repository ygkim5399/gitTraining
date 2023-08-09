#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>
#include <iomanip>
int main()
{
	double d = 3.141592; // 사용자가 입력했다고 가정

	// C언어로 d 를 문자열로 만들어 보세요. 
	// => 최선의 방법은 ?
//	char s[8];
//	sprintf(s, "%lf", d);     // d 의 값이 8 자리 이상이면 ?
//	snprintf(s, 8, "%lf", d); // 오버플로우는 아니지만 "값이 잘리게됩니다"

	// C++ 스타일
	std::ostringstream oss;
	oss << std::setprecision(10);

	oss << "d = " << d;  // cout 과 사용법 동일

	std::string s = oss.str();

	

	std::cout << s << std::endl;
}
