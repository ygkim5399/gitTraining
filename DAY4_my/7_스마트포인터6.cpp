#ifndef DAY4

#include <iostream>
#include <memory>

void foo(void* p) { free(p); }

int main()
{
	// 삭제자 변경
	std::shared_ptr<int>  sp1(new int); // ok, sp1 소멸자가 delete 수행!

	std::shared_ptr<int>  sp2((int*)malloc(sizeof(int)));	// 버그
									// 메모리할당은 malloc, sp2 소멸자는 delete

	std::shared_ptr<int> sp3((int*)malloc(sizeof(int)), foo);
													// ok. 소멸자에서 delete 하지말고 foo 호출해달라

	std::shared_ptr<int> sp4((int*)malloc(sizeof(int)), free);
													// ok. 위보다는 이게 낫다.

	//make_shared 사용시 메모리 할당 자체를 make_shared 안에서 하게 됩니다.
	// -> 무조건 new 사용
	std::shared_ptr<int> sp5 = std::make_shared<int>();

}







#endif