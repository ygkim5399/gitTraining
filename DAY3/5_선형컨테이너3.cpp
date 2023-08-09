#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity ����
int main()
{
	std::vector<int> v(10, 0);

	v.resize(7);	// ũ�� ���̴� �ڵ�...��� ����������� ?
					// => ���� �޸� ��� ����ϰ�
					// => size ������ �����մϴ�.

	std::cout << v.size()     << std::endl;	// 7
	std::cout << v.capacity() << std::endl;	// 10

	v.push_back(5); // ���� �Ѱ�(5) �߰�
					// capacity > size �̹Ƿ�
					// �� ������ �޸� ���Ҵ��� �ʿ� �����ϴ�
					// ���� ������ �����մϴ�.

	std::cout << v.size() << std::endl;	    // 8
	std::cout << v.capacity() << std::endl;	// 10					

	v.shrink_to_fit(); // size == capacity �� �ش޶�
					   // �ᱹ �̼��� 8�� ũ�� �޸� ���Ҵ��ؼ� ���

	std::cout << v.size() << std::endl;	    // 8
	std::cout << v.capacity() << std::endl;	// 8	

	v.push_back(5); // ���� �Ѱ� �߰�
					// size == capacity ���� �̹Ƿ� ����(�޸�) ���Ҵ� �ʿ�
					// ���� 8�� �ε�, 9�� ũ�⸦ �Ҵ��ϴ� ���� �ƴ϶�
					// VS  : ���� ũ�� * 1.5 �� Ű���
					// G++ : ���� ũ�� * 2   �� Ű��� �˴ϴ�.

	std::cout << v.size() << std::endl;	    // 9
	std::cout << v.capacity() << std::endl;	// 12

}




