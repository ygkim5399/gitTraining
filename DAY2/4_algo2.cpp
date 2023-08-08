#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// �ٽ� : �˰����� �����̳ʸ� ���� ���Ѵ�.

template<typename T1, typename T2>
T1 remove(T1 first, T1 last, const T2& value)
{
	// first, last �� �ݺ��� ��� �͸� �� ���Դϴ�.
	// ��, ++ �� * ������ ���
	// first, last �� � �����̳�(vector, list��)������ �˼� �����ϴ�.

	// ����, �����̳��� �޸� ��ü�� �����ϰų� ���ϼ��� �����ϴ�.
	
	// value �� ã���� ���� ��Ҹ� ������ �̵��� ���� ���� �Դϴ�.
}


int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// std::remove : �־��� �������� Ư�� ���(3) �� ����
	// ��ȯ�� p : ��ȿ�� ����� ����(���� �ִ� ����� ó��)�� ����Ű��
	//			 �ݺ���
	auto p = std::remove(v.begin(), v.end(), 3);

	show(v);  

	// �����̳��� �޸� ��ü�� ���϶��� 
	// �Ϲ��Լ��� �ƴ� �����̳��� ��� �Լ��� ����ؾ� �մϴ�.
	v.erase(p, v.end());

	show(v);

	return 0;
}



















//
