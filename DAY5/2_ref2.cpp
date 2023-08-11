#include <iostream>
#include <functional>

// C++ ǥ���� reference_wrapper �� ����� ���ô�.
template<typename T> 
class reference_wrapper
{
	T* obj;
public:
	reference_wrapper(T& r) : obj(&r) {}

	// ��ȯ ������ : ��ü�� �ٸ� Ÿ������ ��ȯ�� �ʿ��Ҷ� ȣ��
	operator T& () { return *obj; }
};

int main()
{
	int n1 = 10;
	int n2 = 20;

	reference_wrapper<int> r1 = n1;
	reference_wrapper<int> r2 = n2;

	r1 = r2;

	// reference_wrapper => int& �� ȣȯ�����ϰ�
	int& r = r1; // r1.operator int&() �Լ� �� �ʿ� !

	std::cout << n1 << std::endl;
	std::cout << n2 << std::endl;
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;
}

