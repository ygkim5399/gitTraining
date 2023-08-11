#ifndef DAY2


#include <vector>
#include <algorithm>
#include <functional> // std::less<>, std::greater<> �� �̹� �ֽ��ϴ�. 
#include "show.h"


inline bool cmp1(int a, int b) { return a < b; }

// std::sort() ���� ����


int main() {
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 1. �� ��å�� �������� �ʴ� ��� : ���� ���� ����
	std::sort(v.begin(), v.end());


	// 2. �Ϲ� �Լ��� �� ��å�� �����ϴ� ���
	std::sort(v.begin(), v.end(), cmp1); // ����å(cmp1) �ζ��� ġȯ �ȵ�



	// 3. �Լ� ��ü�� �� ��å�� �����ϴ� ���
	std::less<int> f;
	std::sort(v.begin(), v.end(), f); // �� �Լ� ��å(f)�� �ζ��� ġȯ��

	// �ѹ��� ����ϸ� "�ӽð�ü" ���·� ������ ���� �����ϴ�.
	std::sort(v.begin(), v.end(), std::less<int>());


	// 4. ����å���� ����ǥ���� ���
	// -> �Լ� ��ü�� ������ ȿ��
	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });

}



#endif