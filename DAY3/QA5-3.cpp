#include <stdio.h>

namespace std
{
	class string {};

	template<typename T>
	void max(T a, T b) { printf("std::max\n"); }

	namespace ranges
	{
		template<typename T>
		void max(T a, T b) { printf("std::ranges::max\n"); }
	}
}

int main()
{
	std::string s1, s2;

	std::max(s1, s2);
	std::ranges::max(s1, s2);
}