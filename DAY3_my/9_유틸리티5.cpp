#ifndef DAY3


#include <iostream> // ǥ�� ����� ��Ʈ��
#include <fstream>  // ȭ�� ��Ʈ��
#include <sstream>  // �޸�(��Ʈ��)��Ʈ��
#include <string>

#include <iomanip>


int main() {
	std::ostringstream oss; // ���ڿ����� ��� ��ü
	// std::istringstream iss; // ���ڿ����� �Է�

	std::istringstream iss("to be or not to be");


	std::string s;
	iss >> s; // iss ���� �� �ܾ� �Է�
	
	while (iss >> s) // ��������� false, ������ true
		std::cout << s << std::endl;


	// �ᱹ �� �ڵ�� "�Ѱ��� ���忡�� �ܾ�� �и��ؼ� ������ �ִ°�"
	// -> C����� strtok() ����� �����ϰ� �ִ� ��

	std::cout << s << std::endl;
}

#endif