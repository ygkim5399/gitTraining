#include <iostream>
#include <vector>
#include <list>

/*
void print_first_element(std::vector<int>& v)
{
	int n = v.front();
	std::cout << n << std::endl;
}
*/
/*
template<typename T>
void print_first_element(std::vector<T>& v)
{
	T n = v.front();

	std::cout << n << std::endl;
}
*/
template<typename T>
void print_first_element(T& v)
{
	// T               : std::list<double>
	// T::value_type  : std::list<double>::value_type => double
	typename T::value_type n = v.front();
	
	std::cout << n << std::endl;
}

int main()
{
//	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<double> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<double> v = { 1,2,3,4,5,6,7,8,9,10 };

	print_first_element(v);
}

// 템플릿 기반의 컨테이너가 "저장하는 타입"을 알고 싶을때가 있습니다.
// ( 위 print_first_element 처럼)
// 그래서, STL의 모든 컨테이너는 아래 처럼되어 있습니다.
/*
template<typename T> class list
{
public:
	using value_type = T; // 핵심!!!
						  // typedef T value_type ;

	//......
};
list<int> s = { 1,2,3 };

list<int>::value_type n = s.front(); // n의 타입을 생각해보세요..
									 // int n
*/

// 핵심 1. typename 키워드 필요한 이유 알아두세요
// 
//      2. C 가 컨테이너 일때 "C::value_type" 이 요소의 타입이라는 점

//		3.
// 일반 클래스 : 멤버 데이타, 멤버 함수
// STL 컨테이너: 멤버 데이타, 멤버 함수, 멤버 타입