#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string s1 = "A";
	std::string s2 = "B";

	// �Ʒ� 4���� ������ ������
	auto a1 = std::max(1,  2);	// ok.  max �� std:: �ȿ� �ֽ��ϴ�.
	auto a2 = std::max(s1, s2); // ok.

	auto a3 = max(1,  2);	// error. 
	auto a4 = max(s1, s2);	// ok.  s1, s2 �� std:: �ȿ� �����Ƿ� �ڵ��˻�

}