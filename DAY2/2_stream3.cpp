#include <iostream>
#include <iterator>
#include <list>
#include <fstream> 

int main()
{
	std::ostream_iterator<char> p1(std::cout, "");


	std::ifstream fin("2_stream3.cpp"); // �Է� ����

	std::istream_iterator<char> p2(fin); // p2�� fin ���Ͽ���
										// char ������ �д� �ݺ���

	std::cout << *p2 << std::endl; // #


}