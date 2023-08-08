// 3_�˰������å����
#include <iostream>
#include <vector>
#include <functional>
#include "show.h"

#include <algorithm>  // ����, �����˻�, ���� �˻� ���� �˰���
#include <numeric>    // ��ġ ���� ����(��, �κ���, ������)

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

//	std::sort(v1.begin(), v1.end()); // <algorithm> ���

	// ��ġ �˰���
	// int n = std::accumulate(v1.begin(), v1.end(), 0);


	// �ٽ� : STL �� �پ��� �˰����� ��å ������ �����ϵ��� ����Ǿ� �ֽ��ϴ�.
//	int n = std::accumulate(v1.begin(), v1.end(), 0); // ���������� + ����

//	int n = std::accumulate(v1.begin(), v1.end(), 1, 
//								[](int a, int b) { return a * b; });

	int n = std::accumulate(v1.begin(), v1.end(), 1,
								std::multiplies<int>() );

	std::cout << n << std::endl; 

}
