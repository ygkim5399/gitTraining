#ifndef DAY5

#include <iostream>
#include <vector>
#include <algorithm>
//#include <ranges> 

int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };


	for (auto e : v)
		std::cout << e << ", ";

	// �� for ���� ���� �����Ϸ��� �Ʒ� �ڵ带 �����մϴ�.
	// -> C#, python, rust �� ��κ��� �� �����մϴ�.
	// -> �ᱹ �ݺ��ڷ� �ϴ°�!!

	auto first	= v.begin(); // �Ǵ� std::begin(v);
	auto last	= v.end();
	for (; first != last; ++first) {
		auto e = *first;
		//===========
		std::cout << e << ", ";
	}

}


#endif