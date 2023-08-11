#ifndef DAY4

#include <iostream>
#include "show.h"

#include <set> // Red Black Tree�� ���� (�������� tree)

int main()
{
	// �ٽ� 1. set�� ���������� "tree"�� ����.
	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);

	// �ٽ� 2. set�� ��һ����� insert �θ� �����ϴ�.
	//s.push_back(10); // error, push back �� �� �ڿ� �ִ´ٴ� �ǹ�������
	//							tree�� �ǵ� ������ ����. (���� �����ʿ� ������� tree�� ������)

	// �ٽ� 3. �ݺ��ڴ� �б� �����Դϴ�.
	auto p = s.begin(); // ���� �����ڽ�(������)
	//*p = 35; // error. set�� �ݺ��ڴ� �б�����


	// �ٽ� 4. �ݺ��ڸ� ++�� �̵��ϸ�
	//			-> set�� �ִ� ��� �����͸� ũ�� ������� ����

	//auto p = s.begin();
	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}
	
	// �ٽ� 5. ����� �ߺ��� ������� �ʽ��ϴ�.
	//		-> ��ȯŸ�� : std::pair<iterator, bool> : ��� �����ߴ��� (�̹� �����ϴ� ����� iterator)
	auto ret = s.insert(15); // ����
	//std::pair<std::set<int>::iterator, bool> ret = s.insert(15); // c++11(auto) ����,
	if (ret.second == false) {
		std::cout << "insert fail : " << *(ret.first) << std::endl;
	}
}







#endif