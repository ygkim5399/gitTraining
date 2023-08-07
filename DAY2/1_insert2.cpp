#include <list>
#include <vector>
#include <algorithm>
#include <iterator>  // ���Թݺ��ڸ� ���� ���

int main()
{
	std::list<int> s1 = { 0, 0, 0, 0, 0 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	// v �� ��� ��Ҹ� list �� �߰��ϰ� �ʹ�.

	// ��� 1. push_back ���
	for (auto e : v)
		s1.push_back(e);

	// ��� 2. ���Ի��� �� std::copy ���
//	std::back_insert_iterator< std::list<int> > bi(s2);
//	std::copy(v.begin(), v.end(), bi);

	// std::copy ���ô� �Ʒ� ó�� "���Թݺ��ڸ� ����� �Լ�"�� ����ϸ�
	// ���մϴ�
	// std::back_inserter(s2) : ���� bi ���� ���� �ݺ��� ��ü�� ����� �Լ�
	std::copy(v.begin(), v.end(), std::back_inserter(s2) );
}



