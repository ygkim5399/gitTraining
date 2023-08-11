// 6_optional
#include <iostream>
#include <optional>

// int                   : 정수값만 보관 가능
// std::pair<int, bool>  : 정수 한개 + bool(성공/실패, 또는 값없음표현가능)

// 아래 처럼 하면 "실패"등을 표현하기 어렵습니다.
// => 그래서 보통, -1 등을 실패로 약속하고 사용합니다.
int f1()  { return 100; }

// 아래 처럼 하면 좀더 편리합니다.
std::pair<int, bool> f2() { return std::make_pair(100, true); }


// C++17 의 std::optional 이 위와 거의 유사합니다.
std::optional<int> f3()
{
	return 100; // 성공시 값 반환

//	return std::nullopt; // 실패시 값없음 전달
}

int main()
{
	auto ret = f3();

	if (ret)	// 성공
	{
		int n = *ret;	// ret는 포인터가 아닌 optional 이지만
						// 값을 꺼낼때는 * 사용
		std::cout << n << std::endl;
	}
}
