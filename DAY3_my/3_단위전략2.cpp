#ifndef DAY3
#include <vector>


// java, c# ���� ����� : �������̽��� ���� ��ü �� �� �ְ� ������
//							������ �̷��� �ϸ� "�����Լ�" �̹Ƿ� ��������
//
// �׷��� c++ �� �Ʒ�ó�� "���ø� ���ڷ�" ��å��  ���� Ŭ������ ��ü�ϴ� 
// ����� ���� ����մϴ�.
// "policy base design(��������)" �̶�� ��� �Դϴ�. 


// std::allocator<T> : c++ ǥ���� �����ϴ� �޸� �Ҵ��
//						���������� new/delete ���

template<typename T, 
	typename Alloc = std::allocator<T>> // default������ ����
class vector
{
	Alloc ax;	// �޸� �Ҵ�� ��ü
				// vecotr�� ��� ��� �Լ��� �� ��ü�� ����Լ��� ����ؼ�
				// �޸� �Ҵ�/������ �ؾ� �մϴ�.
public:
	void resize(int sz)
	{
		// 1. �޸� �Ҵ���, �Ҵ���� "allocate"�Լ� ���
		T* p = ax.allocate(sz);

		// 2. �޸� ������ �Ҵ���� deallocate �Լ� ��� - ���
		ax.deallocate(p, sz);
	}
};

int main()
{
	std::vector<int> v(5);
	v.resize(10);
}

// ���������� ������ ���� �ΰ���?
// strategy ���� : �������̽��� �˰��� ��ü.
// ���������� "�������� ������ �ƴϰ�", c++ �������� ���
// -> strategy ���� �� �����̶�� ���ø� �˴ϴ�. 

// �޸� �Ҵ�Ⱑ
// "allocate", "deallocate" �� ������ �Ѵٴ� ���� 
// "���ø� �������� ������ �� ������??"
// -> c++20���ʹ� �����մϴ�. "concept"����
// -> c++20 ������ �ȵ˴ϴ�. �׷��� ����ȭ �� ���ҽ��ϴ�.
//	cppreference.com �� 1��° ȭ�� "named requirement"

// �������̽��� �ϸ� �ȵǳ���?
// 


#endif