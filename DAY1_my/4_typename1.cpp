#ifndef DEBUG

class Test
{
public:
	enum { value = 1 };
	typedef int DWORD;
};
int p = 0;

template<typename T> void foo(T a)
{
	// 아래 2줄에서 * 의 의미를 생각해 보세요(1. 곱하기, 2. 포인터 변수 선언)
	Test::value * p; // 곱하기
	Test::DWORD * p; // 포인터 변수 선언

	// "클래스이름::이름" 에서 "이름"의 의미는
	// 1. 값	: enum 상수, static 멤터 데이터
	// 2. 타입	: typefdef, using

	// dependent name (의존 이름)
	// -> 템플릿 인자 T에 의존해서 꺼내는 이름
	// -> 기본적으로는 값으로 해석!
	T::value* p2; // error
	T::DWORD* p3; // error. 곱하기로 해석하는데 p3 가 없음.
	// ->
	typename T::DWORD* p3; // ok : T::DWORD 라는 의존 이름이 
								// 값이아닌 타입의 이름이라고 알려주는 것
}
int main()
{
	Test t;
	foo(t);
}

#endif