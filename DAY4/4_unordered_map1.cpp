#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	// pair �� �����ϴ� unordered_set
	std::unordered_map<std::string, std::string> m = { {"tue", "ȭ����"}, 
														{"sum", "�Ͽ���"} };

	m["mon"] = "������";
}


