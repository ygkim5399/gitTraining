#include <iostream> 
#include <fstream>  
#include <sstream>  
#include <string>
#include <iomanip>
int main()
{
	std::ostringstream oss; // ���ڿ��� ��� ��ü
//	std::istringstream iss; // ���ڿ����� �Է�


	std::istringstream iss("to be or not to be");

	std::string s;

	iss >> s; // iss ���� �Ѵܾ� �Է�

	std::cout << s << std::endl;
}
