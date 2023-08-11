
#ifndef DAY4

// c/c++ 에서 메모리 관리의 문제점
// -> 이 문제점들을 해결하는 것이 "C++ 스마트 포인터" 의 목표
//

int main() {

	// 1. 메모리 누수 (leak) : 메모리 할당 후 해지하지 않는 경우
	int* p1 = new int;


	// 2. dangling pointer 문제
	// -> 포인터 변수가 0은 아닌데, 삭제된 주소를 가진 경우
	int* p2 = new int;
	int* p3 = p2;

	delete p2; // 메모리 삭제
	//*p3 = 10; // 삭제된 메모리 접근

	if (p3 != 0)
		*p3 = 10; // 삭제된 메모리 접근


	// 3. 삭제된 메모리 다시 삭제
	delete p3;

}

#endif