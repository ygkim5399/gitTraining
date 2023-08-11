#include <memory>
#include <iostream>

// unique_ptr 의 삭제자를 변경하려면, 함수 객체를 만들어야 합니다.
struct Freer
{
	void operator()(void* p)
	{
		free(p);
	}
};

int main()
{
	std::unique_ptr<int> up1(new int); // ok.. 소멸자에서 delete

	std::unique_ptr<int, Freer> up2(static_cast<int*>(malloc(sizeof(int))));



	// shared_ptr vs unique_ptr 의 삭제자 변경
	// shared_ptr : 생성자로 삭제자를 받아서, 내부적으로 관리객체에 보관했다가
	//			    소멸자에서 사용. 저장 공간 필요!!
	// unique_ptr : 템플릿 인자로 받아서 사용, 저장 공간 필요 없음.
	std::shared_ptr<int>              sp((int*)malloc(sizeof(int)), 삭제자함수);
	std::unique_ptr<int, 삭제함수객체> up((int*)malloc(sizeof(int)));


	// 삭제자를 템플릿 인자로 받는 것이 좋다면 왜 shared_ptr 은 템플릿인자로
	// 하지 않았나요 ?
	// shared_ptr 은  삭제자를 변경해도 "같은 타입" - 동일컨테이너에 저장가능
	// unique_ptr 은  삭제자를 변경하면 "다른 타입"

	std::shared_ptr<int> sp1(new int, foo);
	std::shared_ptr<int> sp2(new int, goo); // sp1, sp2 는 같은 컨테이너에저장 가능

	// 참고 : unique_ptr 은 복사가 안되므로 컨테이너에 저장 안됩니다.
	std::unique_ptr<int, DELETER1> up1(new int);
	std::unique_ptr<int, DELETER2> up2(new int);




	// 배열로 할당, 아래처럼 int 대신 int[] 전달
	std::unique_ptr<int[]> up3(new int[10]);  // C++14 부터
	std::shared_ptr<int[]> sp3(new int[10]);  // C++17 부터



	
	


}
/*
template<typename T, typename D> class unique_ptr
{
	T* ptr;
public:
	~unique_ptr()
	{
		D d; // 삭제자 객체 생성
		d(ptr); // 삭제
	}
};

unique_ptr<int, Freer> up(new int);



*/