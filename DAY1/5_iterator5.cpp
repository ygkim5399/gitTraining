#include <iostream>
#include <list>

int main()
{
	std::list<int> s1 = { 1,2,3 };

	// �ٽ� 1. past the end iterator
	auto p1 = s1.begin(); // std::begin(s1);  1��° ��Ҹ� ����Ű�� �ݺ���
	auto p2 = s1.end();   // std::end(s1);    ������ ���� ��� ""

//	*p2 = 10; // runtime error.. �������� �ƴ� ������ ������ ����Ű�Ƿ�!

	// .end() �� ���� �ݺ��ڴ� == �� != �������� ���� �����ߴ���
	// Ȯ���ϴ� �뵵�θ� ����ؾ� �մϴ�.
	// [p1, p2)

	while (p1 != p2)
	{
		++p1;
	}

	// �����̳ʰ� ��� �ִ��� Ȯ���ϴ� 2���� ���
	std::list<int> s3;	
	if (s3.empty()) {}	// ���1

	if (std::begin(s3) == std::end(s3)) {}	// ��� 2. 
}