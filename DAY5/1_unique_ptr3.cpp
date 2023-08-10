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
	// shared_ptr : �����ڷ� �����ڸ� �޾Ƽ�, ���������� ������ü�� �����ߴٰ�
	//			    �Ҹ��ڿ��� ���. ���� ���� �ʿ�!!
	// unique_ptr : ���ø� ���ڷ� �޾Ƽ� ���, ���� ���� �ʿ� ����.
	std::shared_ptr<int>              sp((int*)malloc(sizeof(int)), �������Լ�);
	std::unique_ptr<int, �����Լ���ü> up((int*)malloc(sizeof(int)));

	// �迭�� �Ҵ�, �Ʒ�ó�� int ��� int[] ����
	std::unique_ptr<int[]> up3(new int[10]);  // C++14 ����
	std::shared_ptr<int[]> sp3(new int[10]);  // C++17 ����



	
	


}
/*
template<typename T, typename D> class unique_ptr
{
	T* ptr;
public:
	~unique_ptr()
	{
		D d; // ������ ��ü ����
		d(ptr); // ����
	}
};
*/