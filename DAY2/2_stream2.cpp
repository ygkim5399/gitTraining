#include <iostream>
#include <iterator>
#include <list>

#include <fstream> // C++ ���� ����� ��ü

int main()
{
	std::ostream_iterator<int> p1(std::cout, ", ");
	*p1 = 20; 

	std::ofstream fout("a.txt");
	std::ostream_iterator<int> p2(fout, ", ");
	*p2 = 20;

}