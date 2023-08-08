#include <iostream>
#include <iterator>
#include <list>
#include <fstream> 

int main()
{
	std::ostream_iterator<char> p1(std::cout, "");


	std::ifstream fin("2_stream4.cpp");

//	std::istream_iterator<char> p2(fin);
//	std::istream_iterator<char> p3;		// ����Ʈ �����ڴ� 
										// EOF �� ����Ű�� �ݺ���

	// std::istream_iterator    : white space(����, enter, tab ��) ����
	// std::istreambuf_iterator : white space�� �Է�
	std::istreambuf_iterator<char> p2(fin);
	std::istreambuf_iterator<char> p3;

	std::copy(p2, p3, p1);
}