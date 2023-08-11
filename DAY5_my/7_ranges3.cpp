#ifndef DAY5

#include <iostream>
#include <vector>
#include <algorithm>
//#include <ranges> // c++20���� �� �ȿ� take_view, reverse_view ��
					// �پ��� view �� �����˴ϴ�.



int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	// ��� view �� ��ø�� �˴ϴ�.
	std::ranges::filter_view fv(v, [](int n) {return n % 2 == 0; })
	std::ranges::take_view tv(fv, 5);
	std::ranges::reverse_view rv(tv);	// 8, 7, 3, 2, 1

	// syntax sugar		: ������ ������
	// -> ����� �����ѵ� ǥ����� ���ϴٴ� �ǹ�
	// -> �Ʒ��ڵ�� �� 3�ٰ� ������ ����
	//auto rv2 = v | std::views::take(5) | std::views::reverse;
	
	auto rv2 = v	| std::views::filter([](int n) {return n % 2 == 0; } 
					| std::views::take(5) | std::views::reverse;

	// operator| (v, std::voews::take(5) �� ��ȯ�� ��ü) ��� ��������
	// -> ������ ������ ��ũ����  ������� ���Դϴ�.
	for (auto e : rv2)
		std::cout << e << ", ";


}


#endif