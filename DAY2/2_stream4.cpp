#include <iostream>
#include <iterator>
#include <list>
#include <fstream> 

int main()
{
	std::ostream_iterator<char> p1(std::cout, "");


	std::ifstream fin("2_stream4.cpp");

//	std::istream_iterator<char> p2(fin);
//	std::istream_iterator<char> p3;		// 디폴트 생성자는 
										// EOF 를 가리키는 반복자

	// std::istream_iterator    : white space(공백, enter, tab 등) 무시
	// std::istreambuf_iterator : white space도 입력
	std::istreambuf_iterator<char> p2(fin);
	std::istreambuf_iterator<char> p3;

	std::copy(p2, p3, p1);
}