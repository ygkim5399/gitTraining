#include <iostream>
#include <list>
#include <vector>
#include <iterator>

class myback_insert_iterator
{

};

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::list<int> s = { 0, 0, 0, 0, 0 };

	myback_insert_iterator< std::list<int> > bi(s);

	std::copy(v.begin(), v.end(), bi);


	for (auto n : s)
		std::cout << n << ", ";
}
