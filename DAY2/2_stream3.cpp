#include <iostream>
#include <iterator>
#include <list>
#include <fstream> 

int main()
{
	std::ostream_iterator<char> p1(std::cout, "");


	std::ifstream fin("2_stream3.cpp"); // 입력 파일

	std::istream_iterator<char> p2(fin); // p2는 fin 파일에서
										// char 단위로 읽는 반복자

	std::cout << *p2 << std::endl; // #


}