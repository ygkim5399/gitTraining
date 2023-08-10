#include <iostream>

// 1. ���� template ���� ����� �˴ϴ�.

template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}

	~Ptr() { delete obj; }

	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};

int main()
{
	Ptr<int> p1 = new int; // int* p1 = new int;
	*p1 = 20;
	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; // �� ������ ������ �ذ��ؾ�
					  // ����� ���� ����Ʈ ������ �Դϴ�.
}


