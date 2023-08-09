#include <vector>
#include <iostream>

// 사용자 정의 메모리 할당기
// 1. 다양한 타입에 대한 메모리 할당이 필요 하므로
//    => template 으로 만드는 것이 관례

template<typename T>
class debug_alloc
{
public:
	using value_type = T;
	debug_alloc() {}

	// 템플릿 생성자도 필요 한데, 관례적으로 아래 처럼만 하면 됩니다.
	template<typename U> debug_alloc(debug_alloc<U>&) {}

	T* allocate(std::size_t sz) 
	{
		void* ptr = malloc(sizeof(T) * sz);

		printf("allocate : %p, %d cnts\n", ptr, sz);

		return static_cast<T*>(ptr);
	}
	void deallocate(T* ptr, std::size_t sz) 
	{
		printf("deallocate : %p, %d cnts\n", ptr, sz);
		free(ptr);
	}
};



int main()
{
	std::vector<int, debug_alloc<int> > v;

	std::cout << "---------------------" << std::endl;
	
	v.resize(5);

	std::cout << "---------------------" << std::endl;

	v.resize(10);	// 메모리 할당기를 사용해서
					// 1. 새롭게 10개 할당 ( 할당기.allocate(10) )
					// 2. 기존 5개 => 10개 공간에 복사후
					// 3. 기존 5개 메모리 삭제 ( 할당기.deallocate(5) )

	std::cout << "---------------------" << std::endl;

	// 참고
	// 1. 일반적인 환경에서는 "표준 할당기(std::allocator)" 사용하세요
	//    => 범용적으로 사용하기에는 최선의 선택입니다.

	// 2. 특수한 환경(임베디드등)에서 권장되는 메모리 할당 방법이 있을때
	//    사용자 정의 할당기 사용


	// STL 은
	// "메모리 할당" 뿐 아니라, 다양한 정책의 변경을 위해
	// "단위전략"을 사용합니다.
}

