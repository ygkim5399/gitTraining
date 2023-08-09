#include <vector>
#include <iostream>

// ����� ���� �޸� �Ҵ��
// 1. �پ��� Ÿ�Կ� ���� �޸� �Ҵ��� �ʿ� �ϹǷ�
//    => template ���� ����� ���� ����

template<typename T>
class debug_alloc
{
public:
	using value_type = T;
	debug_alloc() {}

	// ���ø� �����ڵ� �ʿ� �ѵ�, ���������� �Ʒ� ó���� �ϸ� �˴ϴ�.
	template<typename U> debug_alloc(debug_alloc<U>&) {}


	T* allocate(std::size_t sz) {}
	void deallocate(T* ptr, std::size_t sz) {}
};

int main()
{
	std::vector<int, debug_alloc<int> > v;

	std::cout << "---------------------" << std::endl;
	
	v.resize(5);

	std::cout << "---------------------" << std::endl;
}