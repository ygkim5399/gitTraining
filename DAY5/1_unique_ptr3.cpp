#include <memory>
#include <iostream>

// unique_ptr 의 삭제자를 변경하려면, 함수 객체를 만들어야 합니다.
struct Freer
{
	void operator()(void* p)
	{
		free(p);
	}
};

int main()
{
	std::unique_ptr<int> up1(new int); // ok.. 소멸자에서 delete

	std::unique_ptr<int, Freer> up2(static_cast<int*>(malloc(sizeof(int))));



	// shared_ptr vs unique_ptr 의 삭제자 변경

	std::shared_ptr<int>        sp((int*)malloc(sizeof(int)));
	std::unique_ptr<int, Freer> up((int*)malloc(sizeof(int)));





	std::unique_ptr<int> up3(new int[10]);



	
	


}