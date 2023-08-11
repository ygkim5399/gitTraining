#ifndef DAY4

#include <iostream>
// C++11�� ����Ʈ�����͸� ����Ϸ��� �ʿ��� ���
// -> std::shared_ptr
// -> std::weak_ptr
// -> std::unique_ptr
#include <memory>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
};

int main()
{
	// C++ ǥ�� "std::sharped_ptr" ����

	// �ٽ� 1. = �ʱ�ȭ�� ����� �� �����ϴ�.
	// -> �����ڰ� explicit ��� �ǹ�.
	std::shared_ptr<int> p1(new int);  // ok
	//std::shared_ptr<int> p2 = new int; // error

	// �ٽ� 2. ����Ʈ �������� ũ��
	//-> raw pointer �� 2��					// 32bit		64bit
	std::cout << sizeof(p1)   << std::endl; // 8byte		16byte
	std::cout << sizeof(int*) << std::endl; // 4byte		8byte
	// smart pointer �� ����ϸ� �޸𸮰� �����Ѵ�.


	// �ٽ� 3. -> �� . ������
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;

	// ����Ʈ �����ʹ� "��ü" ���� "raw pointer"�� �ƴϴ�. 
	// ->	: ������ �����ǰ� �Ǿ��־ ���
	//		: ���ü(car) ����� ����

	sp1->Go(); // shared_ptr �� �ƴ� Car �� ����Լ�
	
	// .	: ���ü(Car) �� �ƴ� shared_ptr ��ü�� ����Լ� ����
	int n1 = sp1.use_count(); // Car �� �ƴ� shared ptr �� ����Լ�

	std::cout << n1 << std::endl; //2

}



#endif