#ifndef DAY5

#include <memory>
#include <iostream>

// c++ ǥ�� ����Ʈ �����ʹ� 3�� �Դϴ�.
// 1. std::unique_ptr : �ڿ��� ���� - �ϳ��� �ڿ��� �ϳ��� ����Ʈ �����ͷ� ��� - ������ �������ϰ� ���� ����. (raw pointer �� ���� ����)
// 2. std::shared_ptr : �ڿ��� ���� - �ϳ��� �ڿ��� �������� ����Ʈ �����ͷ� ���
// 3. std::weak_ptr	  : �ڿ��� ����ų ���� �ְ�, ������ �� ����.
//						-> shared_ptr �� ��ȣ���� ���� �߻��ø� ���


int main()
{
	// 1. ����. =�� �ȵǰ� () �� ����
	std::unique_ptr<int> up1(new int);	// ok
	//std::unique_ptr<int> up2 = up1;		// error

	// 2. unique_ptr �� ������尡 ���� �����ϴ�. - ���� ��� �Լ��� inline ġȯ
	std::cout << sizeof(up1) << std::endl;
	std::cout << sizeof(int*) << std::endl;

}

#endif