#include <iostream>
#include <bitset> // 비트를 관리하는 클래스

// 함수 객체
// => 상태를 가지는 함수
// => "멤버 데이타가 있다는 의미"

class URandom
{
	std::bitset<10> bs; // 10비트를 관리하는 객체
	bool recycle;
public:
	URandom(bool b = false) : recycle(b)
	{
//		bs.set(3); // 3번째 비트만 1로
		bs.set();  // 모든 비트를 1로
	}

	int operator()()
	{
		if (bs.none()) // 모두 0인 경우
		{
			if (recycle == true)
				bs.set();  // 다시 모두 1로
			else
				return -1;
		}
		int k = -1;

		while ( !bs.test( k = rand() % 10 ) );

		bs.reset(k);

		return k;
	}

};

URandom urand; // urand 는 객체지만 "함수처럼 사용가능" 합니다.

int main()
{
	for (int i = 0; i < 15; i++)
		std::cout << urand() << std::endl;
}





