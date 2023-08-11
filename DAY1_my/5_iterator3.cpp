#ifndef DEBUG


#include <iostream>
#include <list>   
#include <vector>

int main()
{
	std::list<int> s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// 1. �ݺ����� ��Ȯ�� Ÿ��
	std::list<int>::iterator p1 = s.begin();
	// ��, ��Ȯ�� Ÿ���� ����ϴ°��� ���������� �ʽ��ϴ�.
	// -> �����̳� ���� �� ���� �ڵ嵵 ����ȴ�.
	// -> �ڵ尡 ������ ���Դϴ�.


	// ���� : auto �� ���
	//auto p1 = s.begin();

	// �ݺ��ڸ� ������ ��
	int s[5] = { 1,2,3,4,5 };
	//auto p2 = s.begin(); // c++ 98 ��Ÿ��
						// s �� �迭�̶�� error

	auto p2 = std::begin(s); // c++11 ���� �߰��� ���
							 // s�� raw array �� ��밡��
}





#endif