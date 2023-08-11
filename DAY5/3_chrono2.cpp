#include <iostream>
#include <chrono>

// chrono : �ð� ���� ���̺귯��
// chrono �� ���� �Ϸ���
// 1. std::ratio �� ���� �ϰ�
// 2. std::chrono::duration �� ���� �ؾ� �մϴ�.


// duration ����  
// => �� �Ѱ��� �����ϴ� Ÿ��
// => ���ø� ���ڷ� "�����ϴ� ���� Ÿ��, ����"�� ���� �մϴ�.
// => Ư�� ������ ����(tick count)�� ǥ���ϴ� �ڷᱸ��
//		 10�� => 1���� 10��
//		      => 1/1000���� 10000��..

int main()
{
	// 1. duration ���
	std::chrono::duration<int, std::ratio<1, 100>>  d1(2); // 1/100 * 2
	std::chrono::duration<int, std::ratio<1, 1000>> d2(d1);// 20����

	std::cout << d1.count() << std::endl; // 2
	std::cout << d2.count() << std::endl; // 20

}
