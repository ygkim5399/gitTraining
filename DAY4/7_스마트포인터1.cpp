#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};

// ����Ʈ ������
// ���� : ���� Ÿ���� ��ü�� �ٸ� Ÿ���� ������ ��Ȱ�� �ϴ� ��
// ���� : -> �� * �����ڸ� ������ �ؼ� ������ ó�� �����ϰ� �ϴ� ��
// ���� : 


// �� ������ �ٽ��� �Ʒ� "Ptr" �Դϴ�.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }  // ��ȯ���� ������ �ؾ� ���纻 ���� �ȵ˴ϴ�

//	Car operator*() { return *obj; } // �̷��� �ϸ� "*obj" ��ü�� ��ȯ���� �ʰ�
									 // ���纻�� ��ȯ�˴ϴ�.(�ӽð�ü �н�)
};

int main()
{
	// p�� Ptr Ÿ���� ��ü�Դϴ�.
	Ptr p = new Car; // Ptr p( new Car ) �� ���� ������ ������

	// PtrŸ���� ��ü p�� ��ġ Car* ó�� ���˴ϴ�.
	p->Go(); // ( p.operator->() ) Go() �� ����ε�,
			 // ( p.operator->() )->Go() �����δ� �̷��� �ؼ��˴ϴ�.
	(*p).Go(); // ��ǥ����� �����ؾ� �մϴ�.
}


