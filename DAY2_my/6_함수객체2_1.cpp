#ifndef DAY2

#include <iostream>
#include <bitset> // ��Ʈ�� �����ϴ� Ŭ����
#include <vector>

// �Լ���ü
// -> ���¸� ������ �Լ�
// -> ��� �����Ͱ� �ִٴ� �ǹ�

class URandom {
	// ��� ����Ÿ
	std::bitset<10> bs; // 10bit �� �����ϴ� ��ü
	bool recycle;
public:
	URandom(bool b = false) : recycle(b) {
		//bs.set(3); // 3��° bit �� 1��
		bs.set(); // ��� bit �� 1��
	}
	int operator()() {
		if (bs.none()) { // ��� 0�� ���
			if (recycle)
				bs.set(); // �ٽ� ��� 1��
			else
				return -1;
		}
		int k = -1;
		while (!bs.test(k = rand() % 10));
		
		bs.reset(k);
		return k;
	}
};
URandom urand; // urand �� ��ü���� "�Լ�ó�� ��밡��"�մϴ�. 


int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}





#endif