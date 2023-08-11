#ifndef DAY2
#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"

#include <vector>

// �ٽ� : �˰����� �����̳ʸ� ���� ���Ѵ�. 



template<typename T1, typename T2>
T1 remove(T1 first, T1 last, const T2& value) {
	// first, last �� �ݺ��� ��°͸� �� ���Դϴ�. 
	// ��, ++�� *������ ���
	// first, last �� � �����̳�(vector, list ��) ������ �� �� �����ϴ�. 

	// ���� �����̳��� �޸� ��ü�� �����ϰų� ���� �� �� �����ϴ�.
	// value �� ã���� ���� ��Ҹ� ������ �̵��� ���� �����Դϴ�. 


}


int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// std::remove : �־��� �������� Ư����Ҹ� ����
	// ��ȯ�� p : ��ȿ�� ����� ����(�����ִ� ����� ó��)�� ����Ű�� �ݺ���
	auto p = std::remove(v.begin(), v.end(), 3);
	show(v);

	// �����̳��� �޸� ��ü�� ���϶��� 
	// �Ϲ��Լ��� �ƴ� �����̳��� ����Լ��� ������մϴ�. 
	v.erase(p, v.end());
	

	show(v);

	// vector ���� Ư����Ҹ� �����ϴ� ���Ͱ��� �ڵ��
	// ���� ������ �ƴմϴ�. C�� �����ص� ���Ͱ��� ����� �˴ϴ�. 

	// �� �ڵ带 ���� �Ʒ�ó�� ���ٷ� ǥ���մϴ�.
	// ���� �Ʒ� ����� "erase - remove idioms" ��� �θ��ϴ�. 
	v.erase(std::remove(v.begin(), v.end(), 3), v.end());
	return 0;
}



















//
#endif