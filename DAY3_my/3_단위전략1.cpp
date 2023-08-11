#ifndef DAY3
#include <vector>

// resize 의 원리를 생각해 봅시다.
template<typename T>
class vector
{
public:
	void resize(int sz)
	{
		// 메모리 할당이 필요한 경우 어떻게 할까요 ?
		// new ? malloc ? linux systemcall? window api? memory pool


		T* p = new T[sz];	// 이렇게 만들었다면
							// vector 사용자가 메모리 할당 방법을 
							// 변경할 수 없게 됩니다.

							// STL 은 사용자가 메모리 할당 방식을 
							// 교체 가능하게 설계되어 있습니다.

	}
};

int main()
{
	std::vector<int> v(5);
	v.resize(10);
}


#endif