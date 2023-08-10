#include <iostream>
#include "show.h"

#include <set> 

int main()
{
	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);

	// �Ʒ� �ڵ带 ���� ������.. good ? bad ?
	// std::find : ���� �˻�
	//             s.begin() ���� ++�� �̵��ϸ鼭 �˻�
	auto ret1 = std::find(s.begin(), s.end(), 30);

	std::cout << *ret1 << std::endl; // 30!

	// set �� ����ϴ� ������ "root" ���� �����˻��ϱ� ���ؼ� �Դϴ�.
	// �� �ڵ� ���ٴ� �Ʒ� �ڵ尡 �����ϴ�.
	// "�˰���� ������ �̸��� ��� �Լ��� �ִٸ� 
	//  ��� �Լ��� ����ض�"

	auto ret2 = s.find(30); // ���� �˻�!!

	std::cout << *ret2 << std::endl;

}

