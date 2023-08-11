// 6_optional
#include <iostream>
#include <optional>

// int                   : �������� ���� ����
// std::pair<int, bool>  : ���� �Ѱ� + bool(����/����, �Ǵ� ������ǥ������)

// �Ʒ� ó�� �ϸ� "����"���� ǥ���ϱ� ��ƽ��ϴ�.
// => �׷��� ����, -1 ���� ���з� ����ϰ� ����մϴ�.
int f1()  { return 100; }

// �Ʒ� ó�� �ϸ� ���� ���մϴ�.
std::pair<int, bool> f2() { return std::make_pair(100, true); }


// C++17 �� std::optional �� ���� ���� �����մϴ�.
std::optional<int> f3()
{
	return 100; // ������ �� ��ȯ

//	return std::nullopt; // ���н� ������ ����
}

int main()
{
	auto ret = f3();

	if (ret)	// ����
	{
		int n = *ret;	// ret�� �����Ͱ� �ƴ� optional ������
						// ���� �������� * ���
		std::cout << n << std::endl;
	}
}
