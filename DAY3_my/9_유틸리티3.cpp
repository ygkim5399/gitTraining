#ifndef DAY3


#include <iostream> // ǥ�� ����� ��Ʈ��
#include <fstream>  // ȭ�� ��Ʈ��
#include <sstream>  // �޸�(��Ʈ��)��Ʈ��
#include <string>

//namespace std {
//	// ��Ȯ���� �Ʒ� Ŭ���� ��� ���ø��Դϴ�. 
//	class ostream {};						// ǥ�� ����� ���� Ŭ����
//	class ofstream		: public ostream{};	// ���� ����� ���� Ŭ����
//	class ostringstream : public ostream{};	// �޸�(string) ����� ���� Ŭ����
//	
//	// ǥ�� ����� ���� ��ü�� �̹� ������� �ֽ��ϴ�. 
//	ostream cout;
//
//}
int main()
{
	std::ofstream fout("a.txt");
	std::ostringstream sout;


	std::cout << "hello"; // ȭ�� ���
	fout << "hello";		// ���� ���
	sout << "hello";		// sout �� ���������� �����ϴ� string �� ����

	std::string s = sout.str(); // sout ������ string ������

	std::cout << s; // �ᱹ "hello" ���

}


#endif