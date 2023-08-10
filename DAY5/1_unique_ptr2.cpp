#include <memory>
#include <iostream>

// C++ ǥ�� ����Ʈ �����ʹ� 3�� �Դϴ�
// 1. std::unique_ptr : �ڿ��� ���� - �ϳ��� �ڿ��� �ϳ��� ����Ʈ �����ͷ� ���.
// 2. std::shared_ptr : �ڿ��� ���� - �ϳ��� �ڿ��� �������� ����Ʈ�����ͷ� ���

// 3. std::weak_ptr : �ڿ��� ����ų���� �ְ�, ���� �Ҽ� ����. 
//					  => shared_ptr �� ��ȣ ���� ���� �߻��ø� ���

int main()
{
	// 1. ����. = �� �ȵǰ� ( ) �� ����
	std::unique_ptr<int> up1(new int); // ok
//	std::unique_ptr<int> up2 = up1;    // error

	// 2. unique_ptr �� ������尡 ���� �����ϴ�.
	std::cout << sizeof(up1) << std::endl;
	std::cout << sizeof(int*) << std::endl;


}