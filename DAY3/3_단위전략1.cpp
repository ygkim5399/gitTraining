#include <vector>

// resize �� ������ ������ ���ô�.
template<typename T>
class vector
{
public:
	void resize(int sz)
	{
		// �޸� �Ҵ��� �ʿ��� ��� ��� �ұ�� ?
		// new ? malloc ? linux systemcall ? windows api ? memory pool

		T* p = new T[sz];	// �̷��� ������ٸ�
							// vector ����ڰ� �޸� �Ҵ� �����
							// �����Ҽ� ���� �˴ϴ�.

							// STL �� ����ڰ� �޸� �Ҵ� ����� 
							// ��ü �����ϰ� ����Ǿ� �ֽ��ϴ�.
	}
};

int main()
{
	std::vector<int> v(5);	// int 5�� �� �����ϴ� vector
	v.resize(10);			// 10���� ����!
}


