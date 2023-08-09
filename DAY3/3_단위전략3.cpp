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

	T* allocate(std::size_t sz) 
	{
		void* ptr = malloc(sizeof(T) * sz);

		printf("allocate : %p, %d cnts\n", ptr, sz);

		return static_cast<T*>(ptr);
	}
	void deallocate(T* ptr, std::size_t sz) 
	{
		printf("deallocate : %p, %d cnts\n", ptr, sz);
		free(ptr);
	}
};



int main()
{
	std::vector<int, debug_alloc<int> > v;

	std::cout << "---------------------" << std::endl;
	
	v.resize(5);

	std::cout << "---------------------" << std::endl;

	v.resize(10);	// �޸� �Ҵ�⸦ ����ؼ�
					// 1. ���Ӱ� 10�� �Ҵ� ( �Ҵ��.allocate(10) )
					// 2. ���� 5�� => 10�� ������ ������
					// 3. ���� 5�� �޸� ���� ( �Ҵ��.deallocate(5) )

	std::cout << "---------------------" << std::endl;

	// ����
	// 1. �Ϲ����� ȯ�濡���� "ǥ�� �Ҵ��(std::allocator)" ����ϼ���
	//    => ���������� ����ϱ⿡�� �ּ��� �����Դϴ�.

	// 2. Ư���� ȯ��(�Ӻ�����)���� ����Ǵ� �޸� �Ҵ� ����� ������
	//    ����� ���� �Ҵ�� ���


	// STL ��
	// "�޸� �Ҵ�" �� �ƴ϶�, �پ��� ��å�� ������ ����
	// "��������"�� ����մϴ�.
}

