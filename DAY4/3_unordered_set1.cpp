#include <iostream>
#include <unordered_set>
#include "show.h"

// set           : tree ����, ������ �����ϰ�, �˻��� ������.
// unordered_set : hash ����, ������ �������� �ʰ�, �˻��� ������.

// �̸��� �׳� "hash_set" �̶�� �ϸ� �ȵǳ��� ??
// => C++ �� "��������� ���� ����" �� �ʽ��ϴ�.

int main()
{
	// 1. C++ ǥ�� �ؽ� �Լ� - �Լ� ��ü�� �����˴ϴ�.
	std::hash<int> hi;
	std::hash<double> hd;
	std::hash<std::string> hs;

	// �ؽ��Լ��� ����Ÿ�� ������ ������ ��ȣ(������ �ٱ��� ����)�� �˷� �ݴϴ�.

	std::cout << hi(10) << std::endl;
	std::cout << hd(3.4) << std::endl;
	std::cout << hs("hello") << std::endl; 
	std::cout << hs("hello") << std::endl;  // ���� ����Ÿ�� ���޵Ǹ�
											// ���� ��ȣ�� ���;� �մϴ�.
					
}

