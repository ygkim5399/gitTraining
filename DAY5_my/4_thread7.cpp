#ifndef DAY5
#include <atomic>

// ���� ���α׷��� ���� ��ƽ��ϴ�
// �Ʒ� ������ �����غ��ô�.

// godbolt.org
int a = 0;
int b = 0;

// foo, goo �� �ٸ� �����尡 �����մϴ�.
void foo()
{
	a = b + 1;	// b �� ĳ���� �ø� �� 1�� ���ϰ� a �� �ִ´�.
	b = 1;
	//// ����ȭ �� �Ʒ��� ���� �ȴ�.
	// b �� ĳ���� �ø� �� exa �� ���, b = 1�� �д�. 
	// exa �� 1�� ���ϰ� a �� ��´�. 
	// �׷��� ������ goo ������ a�� �ݵ�� 1�� �ƴϴ�.
	// reordering, ���ġ

	// �Ʒ��� ���� �ذ��� �� �ִ�.
	a = b + 1;
	std::atomic_thread_fence(
		std::memory_order_seq_cst);	// fence �� �ļ� reordering �� ���´�.
	
	b = 1;
}
	

void goo()
{
	if (b == 1)
	{
		// a�� �ݵ�� 1�ϱ�� ?
		
	}
}

int main()
{
}

#endif