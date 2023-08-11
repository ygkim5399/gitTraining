#ifndef DEBUG

#include <iostream>
#include <list>   
#include <vector>

// 반복자 무효화
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = std::begin(v);

	std::cout << *p << std::endl;

	v.resize(10); // 이 순간 vector v 의 내부버퍼가 변경됩니다. 
					// 기존에 얻어놓은 반복자는 더 이상 사용할 수 없습니다.
					// 반복자가 무효화(invalidate)되었다고 합니다. 

					// vector 가 아닌 list 라면 어떨까요? 
					//	-> list 는 크기를 키울때는 반복자가 무효화되지 않습니다.
	std::cout << *p << std::endl;
}


#endif