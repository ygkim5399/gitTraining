#include <iostream>
#include <ratio>

// 분수를 관리하는 클래스를 생각해 봅시다.
class Rational
{
	int num;
	int den;
public:
	Rational(int n, int d) : num(n), den(n) {}
};

Rational r1(2, 5); // 2/5 
Rational r2(1, 3); // 1/3

// 위 처럼 만들때, 서로 다른 분수값인 r1, r2 가 같은 타입입니다.

// 그런데, C++ 표준에서는 
// => "다른 분수 값을 다른 타입"으로 설계하고 싶었습니다
// => 그래서 std::ratio 를 만들었습니다.


int main()
{
	// 아래 코드에서 r1, r2는 결국 다른 타입입니다.
	std::ratio<1, 10> r1; // 1/10
	std::ratio<2, 10> r2; // 2/10 => 1/5
}

namespace std {

	//class template ratio
	template <intmax_t N, intmax_t D = 1>
	class ratio {
	public:
		typedef ratio<num, den> type;
		static constexpr intmax_t num;
		static constexpr intmax_t den;
	};


	// ratio arithmetic            
	template <class R1, class   R2> using   ratio_add = /*ratio*/;
	template <class R1, class   R2> using   ratio_subtract = /*ratio*/;
	template <class R1, class   R2> using   ratio_multiply = /*ratio*/;
	template <class R1, class   R2> using   ratio_divide = /*ratio*/;

	// ratio comparison            
	template <class R1, class R2> struct ratio_equal;
	template <class R1, class R2> struct ratio_not_equal;
	template <class R1, class R2> struct ratio_less;
	template <class R1, class R2> struct ratio_less_equal;
	template <class R1, class R2> struct ratio_greater;
	template <class R1, class R2> struct ratio_greater_equal;

	// convenience SI typedefs         
	typedef ratio<1, 1000000000000000000000000> yocto;
	typedef ratio<1, 1000000000000000000000> zepto;
	typedef ratio<1, 1000000000000000000> atto;
	typedef ratio<1, 1000000000000000> femto;
	typedef ratio<1, 1000000000000> pico;
	typedef ratio<1, 1000000000> nano;
	typedef ratio<1, 1000000> micro;
	typedef ratio<1, 1000> milli;
	typedef ratio<1, 100> centi;
	typedef ratio<1, 10> deci;
	typedef ratio<10, 1> deca;
	typedef ratio<100, 1> hecto;
	typedef ratio<1000, 1> kilo;
	typedef ratio<1000000, 1> mega;
	typedef ratio<1000000000, 1> giga;
	typedef ratio<1000000000000, 1> tera;
	typedef ratio<1000000000000000, 1> peta;
	typedef ratio<1000000000000000000, 1> exa;
	typedef ratio<1000000000000000000000, 1> zetta;
	typedef ratio<1000000000000000000000000, 1> yotta;

}
