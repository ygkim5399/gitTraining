#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	// �迭�� vector �� �����մϴ�.
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 }; 
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 }; 

	// 1. �迭, vector ��� []�� ��� ����
	// => ��� ���ӵ� �޸𸮿� ����
	x[0] = 10;
	v[0] = 10;

	// 2. vector �� size ������ ���� ������ �迭�� �ȵ˴ϴ�.
	v.resize(20); // ok

	// 3. vector �� �پ��� ��� �Լ��� �ֽ��ϴ�.
	int n = v.size();


	// �迭   : �������� �� ��� ��� ����Ÿ�� stack �� �ֽ��ϴ�.
	// std::vector : ��� ����Ÿ�� "��" �޸𸮿� �ֽ��ϴ�.
	// std::array  : ��� ����Ÿ�� "stack" �޸𸮿� �ֽ��ϴ�.
}
