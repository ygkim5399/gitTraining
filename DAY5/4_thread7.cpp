#include <atomic>
// 병렬 프로그램은 아주 어렵습니다.!!
// 아래 예제를 생각해 봅시다.

// godbolt.org 에 접속해 보세요

int a = 0;
int b = 0;

// foo, goo 는 다른 스레드가 실행합니다.
void foo()
{
	a = b + 1;

	std::atomic_thread_fence( std::memory_order_seq_cst);
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