
#ifndef DEBUG

#include <iostream>
#include <iterator>
#include <list>
#include <fstream> // c++ ���� ����� ��ü

int main(){

	std::ostream_iterator<int> p1(std::cout, ", ");
	*p1 = 20; // �̼��� std::cout << 20 << ", "

	std::ofstream fout("a.txt"); // c++ ���� ���� ����� ���� ��ü

	std::ostream_iterator<int> p2(fout, ", ");
	*p2 = 20; //		    std::cout <<30 << ", "


}

#endif