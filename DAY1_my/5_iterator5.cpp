#ifndef DEBUG

#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	// �ٽ� 1. past the end iterator
	auto p1 = std::begin(s1); // std::begin(s1); 1��° ��Ҹ� ����Ű�� �ݺ���
	auto p2 = std::end(s1);		// std::end(s1); ������ �������

	//*p2 = 10; // runtime error .. �������� �ƴ� ������ ������ ����Ű�Ƿ�
	// end() �� ���� �ݺ��ڴ� == �� != �������� ���� �����ߴ��� Ȯ�ο����θ� ����ؾ��Ѵ�.

	// [p1, p2)

	while (p1 != p2)
	{
		++p1;
	}

	std::list<int> s3;
	// �����̳ʰ� ����ִ��� Ȯ���ϴ� ���
	// ��� 1
	if (s3.empty()) {}
	// ��� 2
	if (std::begin(s3) == std::end(s3)) {}	
}

#endif