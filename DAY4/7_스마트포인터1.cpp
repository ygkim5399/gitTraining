#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};

// �� ������ �ٽ��� �Ʒ� "Ptr" �Դϴ�.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	Car* operator->() { return obj; }
};

int main()
{
	// p�� Ptr Ÿ���� ��ü�Դϴ�.
	Ptr p = new Car; 

	// PtrŸ���� ��ü p�� ��ġ Car* ó�� ���˴ϴ�.
	p->Go(); 
}


