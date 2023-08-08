#include <iostream>
#include <bitset> // ��Ʈ�� �����ϴ� Ŭ����

// �Լ� ��ü
// => ���¸� ������ �Լ�
// => "��� ����Ÿ�� �ִٴ� �ǹ�"

class URandom
{
	std::bitset<10> bs; // 10��Ʈ�� �����ϴ� ��ü
	bool recycle;
public:
	URandom(bool b = false) : recycle(b)
	{
//		bs.set(3); // 3��° ��Ʈ�� 1��
		bs.set();  // ��� ��Ʈ�� 1��
	}




	int operator()()
	{
		return rand() % 10;
	}
};

URandom urand; // urand �� ��ü���� "�Լ�ó�� ��밡��" �մϴ�.

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





