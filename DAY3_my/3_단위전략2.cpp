#ifndef DAY3
#include <vector>


// java, c# 등의 언어라면 : 인터페이스를 만들어서 교체 할 수 있게 하지만
//							하지만 이렇게 하면 "가상함수" 이므로 성능저하
//
// 그래서 c++ 은 아래처럼 "템플릿 인자로" 정책을  담은 클래스를 교체하는 
// 기술을 많이 사용합니다.
// "policy base design(단위전략)" 이라는 기술 입니다. 


// std::allocator<T> : c++ 표준이 제공하는 메모리 할당기
//						내부적으로 new/delete 사용

template<typename T, 
	typename Alloc = std::allocator<T>> // default값으로 지정
class vector
{
	Alloc ax;	// 메모리 할당기 객체
				// vecotr의 모든 멤버 함수는 이 객체의 멤버함수를 사용해서
				// 메모리 할당/해지를 해야 합니다.
public:
	void resize(int sz)
	{
		// 1. 메모리 할당은, 할당기의 "allocate"함수 사용
		T* p = ax.allocate(sz);

		// 2. 메모리 해지는 할당기의 deallocate 함수 사용 - 약속
		ax.deallocate(p, sz);
	}
};

int main()
{
	std::vector<int> v(5);
	v.resize(10);
}

// 단위전략은 디자인 패턴 인가요?
// strategy 패턴 : 인터페이스로 알고리즘 교체.
// 단위전략은 "전통적인 패턴은 아니고", c++ 진영만의 기술
// -> strategy 패턴 의 변형이라고 보시면 됩니다. 

// 메모리 할당기가
// "allocate", "deallocate" 를 만들어야 한다는 것을 
// "템플릿 문법으로 강제할 수 없나요??"
// -> c++20부터는 가능합니다. "concept"문법
// -> c++20 이전은 안됩니다. 그래서 문서화 해 놓았습니다.
//	cppreference.com 의 1번째 화면 "named requirement"

// 인터페이스로 하면 안되나요?
// 


#endif