#include <vector>




// java, C# 등의 언어라면 : 인터페이스를 만들어서 교체 할수 있게 하지만
//							하지만 이렇게 하면 "가상함수" 이므로 성능저하!

// 그래서 C++ 은 아래처럼 "템플릿 인자로" "정책을 담은 클래스를 교체" 하는
// 기술을 많이 사용합니다.
// "policy base design(단위전략)" 이라는 기술 입니다.


// std::allocator<T> : C++ 표준이 제공하는 메모리 할당기
//					   내부적으로 new/delete 사용
template<typename T, 
	     typename Alloc = std::allocator<T> >
class vector
{
	Alloc ax;	// 메모리 할당기 객체
				// vector의 모든 멤버 함수는 이 객체의 멤버 함수를 사용해서
				// 메모리 할당/해지를 해야 합니다.
public:
	void resize(int sz)
	{
		// 1. 메모리 할당은, 할당기의 "allocate" 함수 사용
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


