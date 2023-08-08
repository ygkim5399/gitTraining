#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

int main()
{
	// �ٽ� 1. ��� ����ǥ������ (������ �����ص�) �ٸ� Ÿ���Դϴ�.
	auto f1 = [](int a, int b) { return a + b; };
	// class xxx{ operator()(..) {}}; xxx();

	auto f2 = [](int a, int b) { return a + b; };
	// class yyy{ operator()(..) {}}; yyy();

	std::cout << typeid(f1).name() << std::endl;
	std::cout << typeid(f2).name() << std::endl;




	std::vector<int> v{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

	// 2. �Ʒ� �ڵ带 ������ ������
	// => ��� ���� ǥ������ �ٸ� Ÿ���̹Ƿ� 3���� sort() ����
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });

	// 3. ������ ���� ǥ������ ������ ����ϰ� �ȴٸ�
	// auto ������ ��Ƽ� ����ϴ� ���� �����ϴ�.
	auto cmp = [](int a, int b) { return a < b; };
	// class xxxx{}; xxxx();

	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);

	// 4. �� ���� ���� ����ǥ���� ���,  �̹� ������� �ִ� �Լ���ü��
	// std::less �� ����ϴ� �͵� ������ �ʽ��ϴ�.
	std::sort(v.begin(), v.end(), std::less<int>());
	std::sort(v.begin(), v.end(), std::less()); // C++17 <int> ��������
	std::sort(v.begin(), v.end(), std::less{}); // () ��� {} �� ����
	
}

