#include <iostream>

// 0 ~ 9 ������ "�ߺ� ���� ���� ����" �� ��ȯ�ϴ� �Լ�
// => ��� ������ �ұ�� ?
int urand()
{
	return rand() % 10;
}

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





