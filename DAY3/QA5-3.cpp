#include <stdio.h>

namespace std
{
	class string {};

	template<typename T>
	void max(T a, T b) { printf("std::max\n"); }

	// C++20 ���� �߰�
	namespace ranges
	{
		template<typename T>
		void max(T a, T b) { printf("std::ranges::max\n"); }
	}
}

int main()
{
	std::string s1, s2;

	std::max(s1, s2);			// std::max
	std::ranges::max(s1, s2);	// std::ranges::max

	using namespace std::ranges;

	max(s1, s2);	// 1. ADL �� ���ϸ� std::max
					// 2. using namespace std::ranges ������ std::ranges::max ������
					// => �ᱹ �Լ� ȣ���� ��ȣ�ϴٰ� ���� �߻�
}