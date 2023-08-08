#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,1,2,3,4 };

	auto p1 = s.begin();
	auto p2 = s.end();

	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}

//	auto ret = std::find(p1, p2, 3);
}
