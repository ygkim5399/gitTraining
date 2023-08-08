#include <iostream>
#include <iterator>
#include <list>

#include <fstream> // C++ 파일 입출력 객체

int main()
{
	std::ostream_iterator<int> p1(std::cout, ", ");
	*p1 = 20; 

	std::ofstream fout("a.txt"); // C++에서 파일 출력을 위한 객체

	std::ostream_iterator<int> p2(fout, ", ");
	*p2 = 20;

}