#include <iostream>
#include <functional>

// C++ reference : 이동 불가능한 참조
//				   int& r = n 으로 초기화 되면 r은 평생 n만 참조하게됨
//				   대입 연산시, 참조가 아닌 "참조가 가리키는 값"의 이동

// std::reference_wrapper : 이동가능한 참조
int main()
{
	int n1 = 10;
	int n2 = 20;

//	int& r1 = n1;  
//	int& r2 = n2;

	std::reference_wrapper<int> r1 = n1;
	std::reference_wrapper<int> r2 = n2;

	r1 = r2;	// 이순간의 동작 방식을 생각해 보세요

	// 결과 예측해 보세요				// int&		reference_wrapper
	std::cout << n1 << std::endl;	// 20		10
	std::cout << n2 << std::endl;	// 20		20
	std::cout << r1 << std::endl;	// 20		20
	std::cout << r2 << std::endl;	// 20		20
}

