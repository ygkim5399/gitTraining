#include <vector>




// java, C# ���� ����� : �������̽��� ���� ��ü �Ҽ� �ְ� ������
//							������ �̷��� �ϸ� "�����Լ�" �̹Ƿ� ��������!

// �׷��� C++ �� �Ʒ�ó�� "���ø� ���ڷ�" "��å�� ���� Ŭ������ ��ü" �ϴ�
// ����� ���� ����մϴ�.
// "policy base design(��������)" �̶�� ��� �Դϴ�.


// std::allocator<T> : C++ ǥ���� �����ϴ� �޸� �Ҵ��
//					   ���������� new/delete ���
template<typename T, 
	     typename Alloc = std::allocator<T> >
class vector
{
	Alloc ax;	// �޸� �Ҵ�� ��ü
				// vector�� ��� ��� �Լ��� �� ��ü�� ��� �Լ��� ����ؼ�
				// �޸� �Ҵ�/������ �ؾ� �մϴ�.
public:
	void resize(int sz)
	{
		// 1. �޸� �Ҵ���, �Ҵ���� "allocate" �Լ� ���
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


