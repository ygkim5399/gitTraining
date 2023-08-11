#ifndef DAY2

#include <iostream>
#include <list>
#include <vector>
#include <iterator>

// 삽입반복자종류

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::list<int> s = { 0, 0, 0, 0, 0 };

	
	std::back_insert_iterator< std::list<int> > bi(s);
	std::copy(v.begin(), v.end(), bi);



	for (auto n : s)
		std::cout << n << ", ";
}

#endif