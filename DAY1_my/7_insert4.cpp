#ifndef DEBUG


#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <iterator>
/* ���Թݺ��� ���� 3����
�������
�Ĺ����
���ǻ���
*/
template<typename C>
class eback_insert_iterator
{
};

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int> s = { 0,0,0,0,0 };

	// 1. �Ĺ���� �ݺ��� - s.push_back ���
	//std::back_insert_iterator<std::list<int>> bi(s);
	//std::copy(v.begin(), v.end(), bi);
	// 0,0,0,0,0,1,2,3,4,5

	// 2. ������� �ݺ��� - s.push_froont ���
	//std::front_insert_iterator<std::list<int>> bi(s);
	//std::copy(v.begin(), v.end(), bi);
	//5,4,3,2,1,0,0,0,0,0

	// 3. ���ǻ��� - s.insert ���
	// -> ������ ���ڰ� 2�� (�����̳ʿ� ��ġ(�ݺ���))
	// std::next(s.begin(), 2) : s�� ���ۺ��� 2ĭ ������ �ݺ���
	//std::insert_iterator<std::list<int>> bi(s,std::next(s.begin(), 2));
	//std::copy(v.begin(), v.end(), bi);
	// 0, 0, 1,2,3,4,5, 0, 0,0,
	// ���� : ���ǻ����� ���ؼ� ���� ���ʿ� �ֱ�
	std::insert_iterator<std::list<int>> bi(s, s.begin());
	std::copy(v.begin(), v.end(), bi);
	// 1,2,3,4,5,0,0,0,0,0

	// ���� ���� �ݺ��ڷ� �տ��ֱ� : ������Ұ� �Ųٷ� ����
	// ���� ���� �ݺ��ڷ� �տ��ֱ� : ������Ұ� ������� ����
	//--------------------------------------
	// ���������� �� ó�� Ŭ���� �������ٴ�
	// �Ʒ�ó�� �Լ������� ����ϴ� ���� �����ϴ�.
	// -. �׸��� ���Թݺ��ڸ� �����س��� ��ӻ���ϴ� ���� ������ �ʽ��ϴ�.
	std::copy(v.begin(), v.end(), std::front_inserter(s));
	std::copy(v.begin(), v.end(), std::back_inserter(s));
	std::copy(v.begin(), v.end(), std::inserter(s, s.begin()));


	//eback_insert_iterator<std::list<int>> p(s);

	//*p = 30; // ( p.operator*() ).operator=(30)

	for (auto& n : s)
		std::cout << n << ", ";
}


#endif