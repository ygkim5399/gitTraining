#ifndef DAY5

#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> p1(new int);
	//std::unique_ptr<int> p2 = p1;		// error. 복사될 수 없습니다.
	std::unique_ptr<int> p3 = std::move(p1); // move 는 가능하다. (p3가 기존 p1의 주소를 가지고 p1의 주소는 제거

	// shared_ptr과 unique_ptr의 복사/대입 관계
	std::unique_ptr<int> up(new int);
	std::shared_ptr<int> sp(new int);

	// 다음중 에러는 ? *** TEST
	std::shared_ptr<int> sp1 = up;				// error
	std::shared_ptr<int> sp2 = std::move(up);	// ok
	
	std::unique_ptr<int> up1 = sp;				// error, sp 가 독점권을 가지고 있지않아 줄 수 없다.
	std::unique_ptr<int> up2 = std::move(sp);	// error, 하나의 자원을 여러명이 가리킬 수 있다. 

}


#endif