#ifndef DEBUG
#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
	// vector
	//std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	//auto p = std::begin(s);
	//// �ݺ��� p�� 5ĭ �����ϰ� �ʹ�.
	//p = p + 5; // vector �� ��������
	

	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	auto p = std::begin(s);
	//p = p + 5; // ���� ���� �ݺ��ڸ� ����( vector �ݺ���) 
				// �̿ܿ��� error
	//++p, ++p, ++p, ++p, ++p; // ��� �ݺ��� ��밡��
							// ������ p �� ���������̶�� ��������
	// �ذ�å
	std::advance(p, 5); // p �� ���������̶�� p+5 �� �̵�
						// p �� ���������� �ƴϸ� ++�� �̵�..
						// �ݺ��ڸ� �̵��ϴ� �ּ��� �ڵ�

	std::cout << *p << std::endl;
}

#endif