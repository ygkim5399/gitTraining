#include <forward_list> // �̱� ��ũ�� ����Ʈ
#include <list>			// ���� ��ũ�� ����Ʈ

// ���� 53 page.. �ݺ��� ī�װ�.




int main()
{
	std::forward_list<int> s1 = { 1,2,3 };

	std::list<int> s2 = { 1,2,3 };

	auto p1 = s1.begin(); // �̱۸���Ʈ �ݺ���
	auto p2 = s2.begin(); // ������Ʈ �ݺ���
	
	// �Ʒ� 4�ٿ��� ������ ã�� ������
	++p1;
	--p1; // error. �̱� ��ũ�� ����Ʈ�� �ڷᱸ�� Ư���� ����(prev)�δ� �̵�
		  // �Ҽ� �����ϴ�.
	++p2;
	--p2;

}