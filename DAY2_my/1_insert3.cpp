#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	std::list<int> s1 = { 0, 0, 0, 0, 0 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	std::copy(v.begin(), v.end(), s1.begin());
	std::copy(v.begin(), v.end(), std::back_inserter(s2));


	for (auto e : s1)
		std::cout << e << std::endl;

}