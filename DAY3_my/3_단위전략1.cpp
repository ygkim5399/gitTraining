#ifndef DAY3
#include <vector>

// resize �� ������ ������ ���ô�.
template<typename T>
class vector
{
public:
	void resize(int sz)
	{
		// �޸� �Ҵ��� �ʿ��� ��� ��� �ұ�� ?
		// new ? malloc ? linux systemcall? window api? memory pool


		T* p = new T[sz];	// �̷��� ������ٸ�
							// vector ����ڰ� �޸� �Ҵ� ����� 
							// ������ �� ���� �˴ϴ�.

							// STL �� ����ڰ� �޸� �Ҵ� ����� 
							// ��ü �����ϰ� ����Ǿ� �ֽ��ϴ�.

	}
};

int main()
{
	std::vector<int> v(5);
	v.resize(10);
}


#endif