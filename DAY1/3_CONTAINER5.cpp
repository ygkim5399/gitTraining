#include <iostream>
#include <list>		// 
#include <vector>	//
#include <string>
#include <algorithm> // std::find �� �� ����� �ֽ��ϴ�.

// ���� 40 page

// STL �� 3�� ���
// Container(�����̳�) : list, tree, ���� �ڷᱸ���� ������ Ŭ���� ���ø�
// Iterator(�ݺ���)    : �����̳��� ��Ҹ� ����Ű�� ������ ��Ȱ�� ��ü
// Algorithm(�˰���) : find ����, ��� �����̳ʿ� �����ϴ�
//						          ����Լ��� �ƴ� �Ϲ� �Լ�(���ø�)

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	// ������ �˰����� std::reverse �Դϴ�.
	// v�� ��� ��� ������ ������
	std::reverse(v.begin(), v.end());

	std::list<int> s = { 1,2,3,4,5 };
	// s�� ������ ������
	std::reverse(s.begin(), s.end());
	
	for (auto e : v) { std::cout << e << std::endl; }
	for (auto e : s) { std::cout << e << std::endl; }
}

// std::reverse(v) �� �ϸ� �� �������� �ʳ��� ?? 
// => C++98 ��� ������ ������� �־����ϴ�. ������ ���� �Ұ�
// => C++20 ���� �˴ϴ�. - concept �̶�� ���ο� �������� �ذ�
// std::ranges::reverse(v); // ok

// cppreference.com ���� �� ������
//-------------------------------
// boost.org �� ���� �غ�����

// STL : ��� ���� �����ϰ� ������ �Ŀ� �߰��� C++ ǥ��

// boost : 1999�� ��ǥ�� C++ ������ ���̺귯��
//         1�⿡�� 3~4ȸ�� ��� update ��
//		   ���⼭ ������ ������ ��κ� ǥ�ؿ� �߰���.

// STL : Standard Template Library
