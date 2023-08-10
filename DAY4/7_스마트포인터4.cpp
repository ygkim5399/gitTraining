#include <iostream>

// C++11 �� ����Ʈ�����͸� ����Ϸ��� �ʿ��� ���
// => std::shared_ptr 
// => std::weak_ptr
// => std::unique_ptr
#include <memory>


class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
};

int main()
{
	// C++ ǥ�� "std::shared_ptr" �� ����
	// 
	// �ٽ� 1. = �ʱ�ȭ�� ����Ҽ� �����ϴ�.
	// => �����ڰ� explicit ��� �ǹ�.
	std::shared_ptr<int> p1(new int);  // ok
//	std::shared_ptr<int> p2 = new int; // error



	// �ٽ� 2. ����Ʈ �������� ũ��
	// => raw pointer �� 2��					// 32bit		64bit
	std::cout << sizeof(p1)   << std::endl; // 8byte		16byte
	std::cout << sizeof(int*) << std::endl; // 4byte		8byte



	// �ٽ� 3. -> �� . ������
	std::shared_ptr<Car> sp1(new Car);
	std::shared_ptr<Car> sp2 = sp1;

}



