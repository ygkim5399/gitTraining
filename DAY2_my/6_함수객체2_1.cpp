#ifndef DAY2

#include <iostream>
#include <bitset> // 비트를 관리하는 클래스
#include <vector>

// 함수객체
// -> 상태를 가지는 함수
// -> 멤버 데이터가 있다는 의미

class URandom {
	// 멤버 테이타
	std::bitset<10> bs; // 10bit 을 관리하는 객체
	bool recycle;
public:
	URandom(bool b = false) : recycle(b) {
		//bs.set(3); // 3번째 bit 만 1로
		bs.set(); // 모든 bit 을 1로
	}
	int operator()() {
		if (bs.none()) { // 모두 0인 경우
			if (recycle)
				bs.set(); // 다시 모두 1로
			else
				return -1;
		}
		int k = -1;
		while (!bs.test(k = rand() % 10));
		
		bs.reset(k);
		return k;
	}
};
URandom urand; // urand 는 객체지만 "함수처럼 사용가능"합니다. 


int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





#endif