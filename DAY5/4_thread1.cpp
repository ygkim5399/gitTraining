#include <iostream>
#include <thread> 
#include <chrono>
using namespace std::literals; // �� �ȿ� s, ns, us, min ����
								// ���ͷ� ���̻� ����			
// this_thread namespace 
// => ������ ���� 4�� �Լ� ����

int main()
{
	std::cout << std::this_thread::get_id() << std::endl;

	std::this_thread::sleep_for(3s);

	std::this_thread::sleep_until(�ð�); // �ð� "����" ����
	std::this_thread::yield();		// ���� ������ �����帧��
									// �ߴ��ϰ�, �ٸ� ������ ����
}


