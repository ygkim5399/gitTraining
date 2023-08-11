#ifndef DEBUG

#include <iostream>

#include <list>
#include <vector>
#include <string>

// ���� 40 page

// STL �� 3����
// Container(�����̳�)	: list ,tree, ���� �ڷᱸ���� ������ Ŭ���� ���ø�
// Iterator(�ݺ���)		: �����̳��� ��Ҹ� ����Ű�� ������ ������ ��ü
// Algorithm(�˰���)	: find ���� ��� �����̳ʿ� �����ϴ� ����� �ƴ� �Ϲ��Լ�(���ø�)


int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	// ������ �˰����� std::reverse �Դϴ�.
	// v �� ��� ��Ҹ� ���������
	std::reverse(v.begin(), v.end());

	std::list<int> s = { 1,2,3,4,5 };
	// s �� ������ ������
	std::reverse(s.begin(), s.begin());
	for (auto e : v) { std::cout << e << std::endl; }
	for (auto e : s) { std::cout << e << std::endl; }

	// std::reverse(v) �� �ϸ� �� �������� �ʳ���? 
	// -> c++98 ��� ������ ������� �־����ϴ�.
	// -> c++20 ���� ���� - concept ��� ���ο� �������� �ذ�
	//std::ranges::reverse(v); // ok
}

// STL : ������ �����ϰ� ������ �Ŀ� �߰��� C++ ǥ��
// boost : 1999�⿡ ��ǥ�� C++ ������ ���̺귯��
//		   1�⿡�� 3~4ȸ�� ��� Update ��
//			���⼭ ������ ������ ��κ� ǥ�ؿ� �߰���

#endif