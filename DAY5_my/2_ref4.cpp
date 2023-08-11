#ifndef DAY5
#include <iostream>
#include <functional>

using namespace std::placeholders;

// c++ � ������ �⺻ ������ "value ��Ŀ����" ���� "reference ��Ŀ����"������ �� Ȯ���ϼ���
// -> "value ��Ŀ����"���� ���۷����� �����ϰ� ���� ��, ����ϴ� ���� std::ref()

// �����尣�� ������ ���� : value ������ default, �����մϴ�.
//							std::ref() �� ����ϸ� "����" ���� ����
//							-> ��, �ı����� �ʴ´ٴ� ������ �־���մϴ� (����� å��)

void foo(int a, int& r) { r = 200; }


int main() {
	std::function<void(int)> f;
	//{
		int n = 10;
		//f = std::bind(&foo, _1, n);	// 2��° ���ڰ���
		//							// n�� ����(����)�ұ��?
		//							// 10�� �����ұ��?
		//			// -> n �� ��(���纻)�� �����ϰ� �ְ� �˴ϴ�.
		//			// -> �׷��� n �� �ı��Ǿ �����ϰ� ��� �����մϴ�.

	f = std::bind(&foo, _1, std::ref(n));
							// -> n �� ������ �����ش޶�
							// -> ��Ȯ���� reference_wrapper �� ����
							// -> ��, �ּҸ� ����, reference_wrapper -> int& ��ȯ�� ����
							// -> �� ���, f �� ����ϴ� ���ȿ��� n�� �ı��Ǹ� �ȵ˴ϴ�. (����� å��)
	//}
	f(0);	// 1. foo(0, n);
			// 2. foo(0, 10);

	std::cout << n << std::endl;
}

#endif