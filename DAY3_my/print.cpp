
#ifdef DAY3


#include <iostream>
//#include <print> // c++23 부터 도입됩니다. 
					// g++ 아직 지원 안됩니다.
					// visual studio 2022 preview 버전 부터 됩니다.

int main() {
	//std::cout 은 
	//1. 너무 기교가 많이 사용되었고
	//2. 속도도 느리고
	//3. 코드가 "장황해"보이게 됩니다. 
	//

	std::cout << std::endl; // endl 은 함수입니다.
	std::endl(std::cout); // 위 코드와 이 코드는 동일합니다.

	std::cout.operator<<(&std::endl);


	// c++23 ~ : 속도 빠르고 (print 만큼의 성능 보장) 편하다. 
	//			변수를 직접넣는 것은 불가능 print("{n}")
	// std::print("{0}, {1}, {0:x}", 10, 3, 4);
	// std::println("{0}, {1}, {0:x}", 10, 3, 4);

}


#endif