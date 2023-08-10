#include <iostream>
#include <set>
#include <unordered_set>
#include "show.h"

int main()
{
	// set �� unordered_set �� ������ ���� �����մϴ�.
	// => ������ �� �Լ��� ���������� ������ �ٸ��ϴ�.
//	std::set<int> s;
	std::unordered_set<int> s;

	s.insert(10);
	s.insert(35);
	s.insert(20);
	s.insert(25); // set : 25�� root�� ���ؼ� tree ������ ����
				  // unordered_set : 25 �ؽ� �Լ��� ������ ������ index�� ������ ����


	auto p = s.find(20);	// set : root ���� ���Լ��� ã�� �˴ϴ�.
							// unordered_set : 20�� �ؽ����� ���ؼ�
							//					�ٱ��Ͽ� ���� 
							//      ���ø� 3��° ���ڷ� ���� �� �Լ� ��ü �� ��

	std::cout << *p << std::endl;

	show(s);
}

