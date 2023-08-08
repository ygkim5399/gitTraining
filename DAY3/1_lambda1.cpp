#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

int main()
{
	// �ٽ� : ��� ����ǥ������ (������ �����ص�) �ٸ� Ÿ���Դϴ�.
	auto f1 = [](int a, int b) { return a + b; };
				// class xxx{ operator()(..) {}}; xxx();

	auto f2 = [](int a, int b) { return a + b; };
				// class yyy{ operator()(..) {}}; yyy();


	std::cout << typeid(f1).name() << std::endl;
	std::cout << typeid(f2).name() << std::endl;




	std::vector<int> v{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
}

