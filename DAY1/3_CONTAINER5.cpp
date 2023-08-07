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
	// ?

	std::list<int> s = { 1,2,3,4,5 };
	// s�� ������ ������
	// ?
	
	for (auto e : v) { std::cout << e << std::endl; }
	for (auto e : s) { std::cout << e << std::endl; }
}





