#include <stdio.h>

namespace std
{
	class string {};

	template<typename T>
	void max(T a, T b) { printf("std::max\n"); }

	// C++20 ���� �߰�
	namespace ranges
	{
		// �ٽ� : C++20 �� ��� ���ο� �˰����� �Լ� ��ü �Դϴ�.
		struct MaxFn
		{
			template<typename T>
			inline void operator()(T a, T b)
			{
				printf("std::ranges::max\n");
			}
		};
		MaxFn max; // max �� �Լ��� �ƴ� ��ü �̸� �Դϴ�.
				   // () ������ ������ �Լ� ó�� ��밡���� �Լ� ��ü
				   // ADL ��Ģ�� ������� �ʰ�, �Լ����� �켱 ����
	}
}
int main()
{
	std::string s1, s2;
	std::max(s1, s2);			// std::max
	std::ranges::max(s1, s2);	// std::ranges::max

	using namespace std::ranges;

	max(s1, s2);	
}
// cppreference.com ���� "std::ranges::max" ã������
// "possible implementation" ������