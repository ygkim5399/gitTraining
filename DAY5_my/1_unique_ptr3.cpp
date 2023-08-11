#ifndef DAY5

#include <memory>
#include <iostream>

// unique_ptr 의 삭제자를 변경허려면 함수객체를 만들어야 합니다.
struct Freer {
	void operator()(void* p) {
		free(p);
	}
};


int main()
{
	std::unique_ptr<int> up1(new int);			//ok. 소멸자에서 delete

	//std::unique_ptr<int, Freer> up2(static_cast<int*>(malloc(sizeof(int))));	// 좋은 코드 


	// shared_ptr vs unique_ptr 의 삭제자 변경
	// shared_ptr : 생성자로 삭제자를 받아서 내부적으로 관리객체에 보관했다가
	//				소멸자에서 사용. 저장공간 필요!
	// unique_ptr : 템플릿 인자로 받아서 사용, 저장공간 필요없음
	// 모두 최적화를 위해 아래와 같이 사용
	std::shared_ptr<int>				sp2((int*)(malloc(sizeof(int))), 삭제자 함수);	// 삭제자 함수를 관리객체에서 보관 
	std::unique_ptr<int, 삭제함수객체>	up2((int*)(malloc(sizeof(int))));				// 가볍게 만들기 위해 관리객체에서 보관하지 안고
																						// 템플릿인자로 사용

	// 삭제자를 템플릿 인자로 받는것이 좋다면 왜 shared_ptr 은 템플릿인자로 하지 않았나요?
	// shared_ptr 은 삭제자를 변경해도 "같은타입" - 동일 컨테이너에 저장가능
	// unique_ptr 은 삭제자를 변경하면 "다른타입"

	std::shared_ptr<int> sp1(new int, foo);	//
	std::shared_ptr<int> sp2(new int, goo);	// sp1과 sp2는 같은 타입이므로 같은 컨테이너에 저장 가능

	// 참고 : unique_ptr 은 복사가 안되므로 컨테이너에 저장 안됩니다.
	std::unique_ptr<int, DELETER1> up1(new int);
	std::unique_ptr<int, DELETER2> up2(new int); // 



	
	// 배열로 할당, 아래처럼 int 대신 int[] 전달
	std::unique_ptr<int[]> up3(new int[10]); // c++14부터
	std::shared_ptr<int[]> up3(new int[10]); // c++17부터
	


}
/*
template <typename T, typename D > class unique_ptr_Ex {
	T* ptr;
public:
	~unique_ptr() {
		D d;	// 삭제자 객체 생성
		d(ptr); // 삭제
	}
};
unique_ptr_Ex<int, Freer> up(new int); // up 크기는 4, 삭제될때 잠깐 stack 에 D d 만들어서 제거

*/

#endif