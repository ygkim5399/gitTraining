#ifndef DAY5

// 4_traits
#include <iostream>

template<typename T> void printv(const T& b)
{
	//if (T 가 포인터 타입이면)	// T가 포인터인지 아닌지를 조사하는 기술을 traits 라고 부른다.
	//	std::cout << v << " : " << *v << std::endl;
	//else
	//	std::cout << v << std::endl;
	//std::cout << v << std::endl;
}

int main()
{
	int n = 10;
	double d = 10;

	printv(n);
	printv(d);
	printv(&n);
}

#endif