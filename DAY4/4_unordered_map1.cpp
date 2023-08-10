#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	// pair 를 저장하는 unordered_set
	std::unordered_map<std::string, std::string> m = { {"tue", "화요일"}, 
														{"sum", "일요일"} };

	m["mon"] = "월요일";
}


