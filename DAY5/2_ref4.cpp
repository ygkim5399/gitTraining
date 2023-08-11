#include <iostream>
#include <functional>
using namespace std::placeholders;

void foo(int a, int& r) { r = 200; }

int main()
{
	std::function<void(int)> f;

//	{
	int n = 10;

//	f = std::bind(&foo, _1, n);  
				// => n �� ��(���纻)�� �����ϰ� �ְԵ˴ϴ�.
				// => �׷��� n�� �ı� �Ǿ �����ϰ� ��밡���մϴ�.

	f = std::bind(&foo, _1, std::ref(n) );
				// => n�� ������ �����ش޶�
				// => ��Ȯ���� reference_wrapper �� ����
				// => ��, �ּҸ� ����, reference_wrapper => int& ��ȯ�� ����
				// => �� ���, f �� ����ϴ� ���ȿ��� n�� �ı��Ǹ� �ȵ˴ϴ�(�����å��)
//	}

	f(0); // 1. foo(0, n);
		  // 2. foo(0, 10);

	std::cout << n << std::endl;
}