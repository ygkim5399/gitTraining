#include <memory>
#include <iostream>

// unique_ptr �� �����ڸ� �����Ϸ���, �Լ� ��ü�� ������ �մϴ�.
struct Freer
{
	void operator()(void* p)
	{
		free(p);
	}
};

int main()
{
	std::unique_ptr<int> up1(new int); // ok.. �Ҹ��ڿ��� delete

	std::unique_ptr<int, Freer> up2(static_cast<int*>(malloc(sizeof(int))));



	// shared_ptr vs unique_ptr �� ������ ����

	std::shared_ptr<int>        sp((int*)malloc(sizeof(int)));
	std::unique_ptr<int, Freer> up((int*)malloc(sizeof(int)));





	std::unique_ptr<int> up3(new int[10]);



	
	


}