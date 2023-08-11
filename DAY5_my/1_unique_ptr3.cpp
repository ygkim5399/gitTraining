#ifndef DAY5

#include <memory>
#include <iostream>

// unique_ptr �� �����ڸ� ��������� �Լ���ü�� ������ �մϴ�.
struct Freer {
	void operator()(void* p) {
		free(p);
	}
};


int main()
{
	std::unique_ptr<int> up1(new int);			//ok. �Ҹ��ڿ��� delete

	//std::unique_ptr<int, Freer> up2(static_cast<int*>(malloc(sizeof(int))));	// ���� �ڵ� 


	// shared_ptr vs unique_ptr �� ������ ����
	// shared_ptr : �����ڷ� �����ڸ� �޾Ƽ� ���������� ������ü�� �����ߴٰ�
	//				�Ҹ��ڿ��� ���. ������� �ʿ�!
	// unique_ptr : ���ø� ���ڷ� �޾Ƽ� ���, ������� �ʿ����
	// ��� ����ȭ�� ���� �Ʒ��� ���� ���
	std::shared_ptr<int>				sp2((int*)(malloc(sizeof(int))), ������ �Լ�);	// ������ �Լ��� ������ü���� ���� 
	std::unique_ptr<int, �����Լ���ü>	up2((int*)(malloc(sizeof(int))));				// ������ ����� ���� ������ü���� �������� �Ȱ�
																						// ���ø����ڷ� ���

	// �����ڸ� ���ø� ���ڷ� �޴°��� ���ٸ� �� shared_ptr �� ���ø����ڷ� ���� �ʾҳ���?
	// shared_ptr �� �����ڸ� �����ص� "����Ÿ��" - ���� �����̳ʿ� ���尡��
	// unique_ptr �� �����ڸ� �����ϸ� "�ٸ�Ÿ��"

	std::shared_ptr<int> sp1(new int, foo);	//
	std::shared_ptr<int> sp2(new int, goo);	// sp1�� sp2�� ���� Ÿ���̹Ƿ� ���� �����̳ʿ� ���� ����

	// ���� : unique_ptr �� ���簡 �ȵǹǷ� �����̳ʿ� ���� �ȵ˴ϴ�.
	std::unique_ptr<int, DELETER1> up1(new int);
	std::unique_ptr<int, DELETER2> up2(new int); // 



	
	// �迭�� �Ҵ�, �Ʒ�ó�� int ��� int[] ����
	std::unique_ptr<int[]> up3(new int[10]); // c++14����
	std::shared_ptr<int[]> up3(new int[10]); // c++17����
	


}
/*
template <typename T, typename D > class unique_ptr_Ex {
	T* ptr;
public:
	~unique_ptr() {
		D d;	// ������ ��ü ����
		d(ptr); // ����
	}
};
unique_ptr_Ex<int, Freer> up(new int); // up ũ��� 4, �����ɶ� ��� stack �� D d ���� ����

*/

#endif