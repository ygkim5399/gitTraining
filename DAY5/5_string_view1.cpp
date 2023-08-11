// 5_string_view
#include <iostream>
#include <string>
#include <string_view> // C++17 ���� �߰�

int main()
{
	std::string s = "to be or not to be";

	std::string		 ss1 = s; // ���� ����. ���ڿ� ��ü�� ����
	std::string_view sv1 = s; // sv1 �� s�� ���� ���ڿ��� ���� ����ϰ� �˴ϴ�.
							  // => "borrow(�뿩)" ��� ǥ���մϴ�.
							  // => sv1�� ���ؼ��� �б⸸ �����մϴ�.
							  // => ���ڿ��� ���� �������� �����ϴ�.

	std::cout << sizeof(sv1) << std::endl; // �������Ѱ� + size ���� �Ѱ� ũ��

	//------------------------------------------------
	// ����
	const char* p = "AAA"; 

	// �Ʒ� 2���� �޸� �׸��� �Ϻ��� ���� �ؾ� �մϴ�
	std::string		 ss2 = "to be or not to be";
	std::string_view sv2 = "to be or not to be";
}