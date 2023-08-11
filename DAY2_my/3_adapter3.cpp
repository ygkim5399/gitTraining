#ifndef DAY2


#include <iostream>
#include <list>
#include <algorithm>



int main()
{
	std::list<int> s = { 1,2,3,4,5,6,1,2,3,4 };

	//auto p1 = s.begin();
	//auto p2 = std::next(p1, 5);

	// 위 2줄을 아래처럼만 변경하면 기존에 수향하던 작업을 거꾸로 할 수 있습니다. 
	//auto p1 = std::make_reverse_iterator(s.begin());
	//auto p2 = std::make_reverse_iterator(s.end()); 

	// 아래 2줄은 결국 위의2줄과 동일합니다. 

	auto p1 = s.rbegin(); // std::make_reverse_iterator(s.end())
	auto p2 = s.rend();	//	 std::make_reverse_iterator(s.begin());
	while (p1 != p2) {
		std::cout << *p1 << std::endl;
		++p1;
	}

	auto ret1 = std::find(s.begin(), s.end(), 3); // 앞에서 부터 3을 검색
	auto ret2 = std::find(s.rbegin(), s.rend(), 3); // 뒤에서부터 3을검색

	// 핵심 : reverse_iterator 덕분에 
	//			많은 알고리즘을 거꾸로도 동작하게도 할 수 있습니다. 


}

#endif