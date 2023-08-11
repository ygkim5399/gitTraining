
#ifndef DEBUG

#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // c++ 파일 입출력 객체

int main(){

	std::ostream_iterator<int> p1(std::cout, ", ");
	*p1 = 20; // 이순간 std::cout << 20 << ", "

	std::ofstream fout("a.txt"); // c++ 에서 파일 출력을 위한 객체

	std::ostream_iterator<int> p2(fout, ", ");
	*p2 = 20; //		    std::cout <<30 << ", "


}

#endif