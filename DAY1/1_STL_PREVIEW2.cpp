// 1_STL_PREVIEW1
#include <iostream>
#include <list>

int main()
{
	// STL ���� �̹� ������� �پ��� �ڷᱸ�� Ŭ������ �ֽ��ϴ�.
	// => �����̳�
	std::list<int> s;
	s.push_back(10);
	s.push_back(20);
	s.push_back(30);

	// list �� ����� 2���� ���
	std::list<int> s1 = { 1,2,3 }; // C++14 ������ Ÿ�� �ʿ�

	std::list      s2 = { 1,2,3 }; // C++17 ���ʹ� Ÿ�� ��������

}