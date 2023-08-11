#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> p1(new int);
//	std::unique_ptr<int> p2 = p1;			 // error. 복사될수 없습니다.
	std::unique_ptr<int> p3 = std::move(p1); // ok. move 될수 있습니다.	


	// shared_ptr 과 unique_ptr 의 복사/대입 관계
	std::unique_ptr<int> up(new int);
	std::shared_ptr<int> sp(new int);

	// 다음중 에러는 ?
	std::shared_ptr<int> sp1 = up;				// error
	std::shared_ptr<int> sp2 = std::move(up);	// ok

	std::unique_ptr<int> up1 = sp;				// error
	std::unique_ptr<int> up2 = std::move(sp);	// error. 
}
