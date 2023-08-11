
#ifndef DEBUG

#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // c++ 파일 입출력 객체

int main() {

	std::ostream_iterator<char> p1(std::cout, "");

	std::ifstream fin("8_stream3.cpp"); // 입력파일

	std::istream_iterator<char> p2(fin); // p2 는 fin 파일에서
										// char 단위로 읽는 반복자

	std::cout << *p2 << std::endl; // #

	++p2;
	std::cout << *p2 << std::endl; // i

}

#endif