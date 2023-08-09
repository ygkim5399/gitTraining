#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string s1 = "A";
	std::string s2 = "B";

	// 아래 4줄을 생각해 보세요
	auto a1 = std::max(1,  2);	// ok.  max 는 std:: 안에 있습니다.
	auto a2 = std::max(s1, s2); // ok.

	auto a3 = max(1,  2);	// error. 
	auto a4 = max(s1, s2);	// ok.  s1, s2 가 std:: 안에 있으므로 자동검색

}