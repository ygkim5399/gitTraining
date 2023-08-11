#ifndef DAY4

#include <iostream>
#include <unordered_set>
#include "show.h"

// unordered_set 


// set				: tree ����, ������ �����ϰ�, �˻��� ������.
// unordered_set	: hash ����, ������ �������� �ʰ�, �˻��� ������.
// �Ϲ����� �����Ͷ�� tree ���� hash �� ������. ������ �ʿ���� ���

// �̸��� �׳� "hash_set" �̶�� �ϸ� �ȵǳ���??
// -> c++ �� "��������� ��������" �� �ʽ��ϴ�. 


int main()
{
	// 1. c++ ǥ�� �ؽ��Լ� - �Լ� ��ü�� �����˴ϴ�.
	std::hash<int> hi;
	std::hash<double> hd;
	std::hash<std::string> hs;

	// �ؽ��Լ��� �����͸� ������ ������ ��ȣ(������ �ٱ��� ����)�� �˷��ݴϴ�. 

	std::cout << hi(10) << std::endl;
	std::cout << hd(3.5) << std::endl;
	std::cout << hs("hello") << std::endl;
	std::cout << hs("hello") << std::endl; // ���� �����Ͱ� ���޵Ǹ�
											// ���Ϲ�ȣ�� ���;��մϴ�.


}



#endif