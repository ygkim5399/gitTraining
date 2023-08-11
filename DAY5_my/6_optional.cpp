#ifndef DAY5
// 6_optional
#include <iostream>
#include <optional>

// int					: �������� ���� ����
// std::pair<int, bool>	: ���� �Ѱ� + bool (����/����, �Ǵ� ������ ǥ������)


// �Ʒ� ó�� �Ҹ� "����" ���� ǥ���ϱ� ��ƽ��ϴ�.
// -> �׷��� ���� -1 ���� ���з� ����ϰ� ����մϴ�.


int f1() {	return 100; /* ����*/ } // ���и� �˸��� �ʹ�.

// �Ʒ�ó�� �ϸ� ���� ���մϴ�.
std::pair<int, bool> f2() { return std::make_pair(100, true); }

// c++17 �� std::optional �� �̿� ���� �����մϴ�.
std::optional<int> f3() {
	return 10; // ������ �� ��ȯ
	return std::nullopt; // ���н� ������ ����
}

int main()
{
	int ret = f1();

	auto ret1 = f3();
	if (ret1) { // ����
		int n = *ret1; // ret �� �����Ͱ� �ƴ� optional ������ 
						// ���� �������� * ���
		std::cout << n << std::endl;
	}
}


#endif