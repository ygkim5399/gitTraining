#ifndef DAY5
#include <atomic>

// 병렬 프로그램은 아주 어렵습니다
// 아래 예제를 생각해봅시다.

// godbolt.org
int a = 0;
int b = 0;

// foo, goo 는 다른 스레드가 실행합니다.
void foo()
{
	a = b + 1;	// b 를 캐쉬에 올린 후 1을 더하고 a 에 넣는다.
	b = 1;
	//// 최적화 시 아래와 같이 된다.
	// b 를 캐쉬에 올린 후 exa 에 담고, b = 1로 둔다. 
	// exa 에 1을 더하고 a 에 담는다. 
	// 그러기 때문에 goo 에서는 a가 반드시 1은 아니다.
	// reordering, 재배치

	// 아래와 같이 해결할 수 있다.
	a = b + 1;
	std::atomic_thread_fence(
		std::memory_order_seq_cst);	// fence 를 쳐서 reordering 을 막는다.
	
	b = 1;
}
	

void goo()
{
	if (b == 1)
	{
		// a는 반드시 1일까요 ?
		
	}
}

int main()
{
}

#endif