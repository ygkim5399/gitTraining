#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// 잘못된 index 를 사용했습니다.
	// 1. 예외 발생할것이다. throw...
	// 2. 비정상 종료 될것이다
	try
	{
//		v[10] = 0;	  // 2. 비정상 종료, 잘못된 index 확인 안함
		v.at(10) = 0; // 1. 예외 발생
	}
	catch (std::out_of_range& e)
	{
		std::cout << "예외 발생 : " << e.what() << std::endl;
	}

	std::cout << "main continue" << std::endl;


	for (int i = 0; i < v.size(); i++)
	{
		// 다음중 좋은 코드는 ?
		// => 핵심은 i 가 잘못되지 않는다는 것!!
		v[i] = 0;    // 1. 좋은 코드!!!
		v.at(i) = 0; // 2
	}
}