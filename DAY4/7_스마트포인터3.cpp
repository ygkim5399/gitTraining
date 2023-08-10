#include <iostream>

// ����Ʈ �����ʹ� ���� ���縦 �ذ��ؾ� �մϴ�.
// => ��κ� reference counting ����� ����մϴ�

template<typename T>
class Ptr
{
	T* obj;
	int* ref;
public:
	Ptr(T* p = 0) : obj(p) 
	{
		ref = new int;
		*ref = 1;	
	}

	~Ptr() { delete obj; }

	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};



int main()
{
	Ptr<int> p1 = new int; 
	*p1 = 20;
	std::cout << *p1 << std::endl;

	Ptr<int> p2 = p1; 
}


