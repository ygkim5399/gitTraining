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
// 
// ���� : raw pointer �� �ƴ� ��ü(Ŭ���� Ÿ��) �Դϴ�.
//		  ����/����/����/�Ҹ��� ��� �������� ��ӵ� �Լ��� ȣ��˴ϴ�
//        �߰����� �۾������� �����մϴ�.
//        ��ǥ���� Ȱ���� �Ҹ��ڿ����� �ڵ� ���� ���


// �� ������ �ٽ��� �Ʒ� "Ptr" �Դϴ�.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}
	
	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }  // ��ȯ���� ������ �ؾ� ���纻 ���� �ȵ˴ϴ�

//	Car operator*() { return *obj; } // �̷��� �ϸ� "*obj" ��ü�� ��ȯ���� �ʰ�
									 // ���纻�� ��ȯ�˴ϴ�.(�ӽð�ü �н�)
};

int main()
{
	// Car* p = new Car; // C++�� new �� �ϸ� �ݵ�� ����ڰ� delete �ؾ� �մϴ� 
						 // raw pointer ���� p�� �ı��ɶ� �ƹ��ϵ� �־�� �ʽ��ϴ�.
						  

	// p�� Ptr Ÿ���� ��ü�Դϴ�.
	Ptr p = new Car; // Ptr p( new Car ) �� ���� ������ ������
					 // p�� raw pointer �� �ƴ� ��ü �Դϴ�.



	// PtrŸ���� ��ü p�� ��ġ Car* ó�� ���˴ϴ�.
	p->Go(); // ( p.operator->() ) Go() �� ����ε�,
			 // ( p.operator->() )->Go() �����δ� �̷��� �ؼ��˴ϴ�.
	(*p).Go(); // ��ǥ����� �����ؾ� �մϴ�.
}


