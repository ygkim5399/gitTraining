#ifndef DAY2


#include <iostream>
#include <list>
#include <algorithm>



// adapter ���� : ���� Ŭ������ �������̽� (�Լ��̸�) �� 
//				����ڰ� �䱸�ϴ� ���·� �����ϴ� ������ ����


// reverse_iterator �� �ᱹ
// ++ -> -- �������� ����
// -> �׷��� iterator adapter ��� ���� �з��մϴ�.
// -> 4���� iterator adapter �� �ֽ��ϴ�.

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };


	// �����̳ʿ��� ������ iterator �� 4���� ������ �ֽ��ϴ�. 

	// 1. �⺻ �ݺ���
	std::list<int>::iterator p1 = s.begin(); // std::begin(s);

	// 2. �� �ݺ��� (reverse interator) 
	std::list<int>::reverse_iterator p2 = s.rbegin(); //std::rbegin(s);

	// 3. ��� �ݺ��� (const iterator)
	std::list<int>::const_iterator p3 = s.cbegin(); //std::cbegin(s);
	//*p3 = 10; // error. ����ݺ��ڴ� �б⸸ ����

	// 4. ��� ���ݺ��� (const reverse iterator)
	std::list<int>::const_reverse_iterator p4 = s.crbegin(); //std::crbegin(s);

}

#endif