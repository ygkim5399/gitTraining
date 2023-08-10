#include <iostream>
#include <set>
#include <unordered_set>
#include "show.h"

int main()
{
	// set 과 unordered_set 은 사용법이 거의 동일합니다.
	// => 하지만 각 함수의 구현원리는 완전히 다릅니다.
//	std::set<int> s;
	std::unordered_set<int> s;

	s.insert(10);
	s.insert(35);
	s.insert(20);
	s.insert(25); // set : 25를 root와 비교해서 tree 구조로 구축
				  // unordered_set : 25 해쉬 함수로 보내서 저장할 index를 얻은후 저장


	auto p = s.find(20);	// set : root 부터 비교함수로 찾게 됩니다.
							// unordered_set : 20의 해쉬값을 구해서
							//					바구니에 가서 
							//      템플릿 3번째 인자로 보낸 비교 함수 객체 로 비교

	std::cout << *p << std::endl;

	show(s);
}

