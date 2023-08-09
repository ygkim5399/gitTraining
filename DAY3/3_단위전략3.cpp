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
}