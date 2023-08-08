// 3_함수객체4 -  137 page 제일 윗부분내용

       int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

int main()
{
	int n1 = Add1(1, 2); // 호출
						 // 인자 2개를 약속된 장소에 넣고
						 // Add1 함수로 이동(call Add1)

	int n2 = Add2(1, 2); // 치환
						 // 이부분을 Add2의 기계어 코드로 교체
						 // mov eax, 2
						 // add eax, 1
						 // mov n2, eax
						// 장점 : 빠릅니다.
						// 단점 : 커다란 함수를 여러번 치환하게 되면
						//       코드 메모리 증가,
						//		하지만 Add2 정도는 오히려감소 합니다.
							

	int(*f)(int, int) = &Add2;

	f(1, 2); // 호출될까요 ? 치환 될까요 ?
}

