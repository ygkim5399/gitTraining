#ifndef DAY2


#include <iostream>
#include <list>
#include <algorithm>



int main()
{
	std::list<int> s = { 1,2,3,4,5,6,1,2,3,4 };

	//auto p1 = s.begin();
	//auto p2 = std::next(p1, 5);

	// �� 2���� �Ʒ�ó���� �����ϸ� ������ �����ϴ� �۾��� �Ųٷ� �� �� �ֽ��ϴ�. 
	//auto p1 = std::make_reverse_iterator(s.begin());
	//auto p2 = std::make_reverse_iterator(s.end()); 

	// �Ʒ� 2���� �ᱹ ����2�ٰ� �����մϴ�. 

	auto p1 = s.rbegin(); // std::make_reverse_iterator(s.end())
	auto p2 = s.rend();	//	 std::make_reverse_iterator(s.begin());
	while (p1 != p2) {
		std::cout << *p1 << std::endl;
		++p1;
	}

	auto ret1 = std::find(s.begin(), s.end(), 3); // �տ��� ���� 3�� �˻�
	auto ret2 = std::find(s.rbegin(), s.rend(), 3); // �ڿ������� 3���˻�

	// �ٽ� : reverse_iterator ���п� 
	//			���� �˰����� �Ųٷε� �����ϰԵ� �� �� �ֽ��ϴ�. 


}

#endif