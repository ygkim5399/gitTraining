#include <iostream>
#include <list>
#include <vector>
#include <iterator>

// ���Թݺ������� 3����
// ���� ����
// �Ĺ� ����
// ���� ����

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::list<int> s = { 0, 0, 0, 0, 0 };
	
	// 1. �Ĺ� ���� �ݺ��� - s.push_back ���
//	std::back_insert_iterator< std::list<int> > bi(s);
//	std::copy(v.begin(), v.end(), bi);
					// 0, 0, 0, 0, 0, 1, 2, 3, 4, 5

	// 2. ���� ���� �ݺ��� - s.push_front ���
	std::front_insert_iterator< std::list<int> > bi(s);
	std::copy(v.begin(), v.end(), bi);
					// 5, 4, 3, 2, 1, 0, 0, 0, 0, 0




	for (auto n : s)
		std::cout << n << ", ";
}
