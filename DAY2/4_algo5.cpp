#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };

	// vector ���� Ư�� ��Ҹ� �����ϴ� ���
	// => ���������δ� �Ʒ� ��� ��� 
	// => �Ʒ� �ڵ尡 ���� ������ ��� �Դϴ�( erase remove idioms)
//	v.erase(std::remove(v.begin(), v.end(), 3), v.end());

	// C++20 ���ʹ� �Ʒ� ó�� �ص� �˴ϴ�.
	// => �����̳� ����!!
	std::erase(v, 3); // vector ����
	std::erase(s, 3); // list ���� ��
						// ��� �����̳ʿ� ���ؼ� ���� �����մϴ�.

	show(v);
	show(s);

	// reverse�� �Ʒ� ������ �ֽ��ϴ�.
//	std::ranges::reverse(v);
//	std::ranges::reverse(s);
}

