#include <vector>
#include <algorithm>
#include <iostream>

// 1. container ����
// => "range - for" �� ����ϴ� ���� ���� �����ϴ�.
template<typename C>
void show(const C& c)
{
	for (auto e : c)
		std::cout << e << ", ";

	std::cout << "\n";
}

// 2. iterator ����
template<typename T>
void show(T first, T last)
{
	std::ostream_iterator< ? > p(std::cout, ", ");

	std::copy(first, last, p);

	std::cout << "\n";
}

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

	// �����̳��� ��� ��Ҹ� ȭ�� ����� ���� ���� �ֽ��ϴ�.
	// �Ʒ� �Լ��� ����� ���ô�.
	show(v);
	show(x);

	show(x, x + 5);
	show(v.begin(), std::next(v.begin(), 5));
					// "v.begin() + 5" �� ����(�������� �̹Ƿ�)
					// ������ v�� list ��� std::next() �ʿ�
}