#ifndef DEBUG

// �Է� �ݺ���
// ��� �ݺ���
// ������ �ݺ���
// ����� �ݺ���
// �������� �ݺ���
// continuous �ݺ���
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

int main()
{
	// �Է�, ����, �����, ������ write ����� �ȵǴ°ɱ��?
	// -> �ȵǴ� ���� �ƴ϶� �ʼ������� �ƴ϶�� �ǹ��Դϴ�.
	std::list<int> s1 = { 1,2,3 };
	const std::list<int> s2 = { 1,2,3 };

	auto p1 = s1.begin();	// p1�� ����� �ݺ���, ���⵵ ����
	auto p2 = s2.begin();	// p1�� ����� �ݺ���, �б⵵ ����

	// �׷� std::reverse() �� ������ ����� + ����ΰ���?
	// -> �����մϴ�. ��Ȯ���� ����� + swappable �Դϴ�
	// cppreference.com ���� std::reverse �˻�
	//--------------------------
	//�� list �ݺ��ڴ� +, - �� �ȵǳ���?
	//	-> �׳� �����ϸ� �ȵǳ���?
	//	-> ���ɳ��� �ڵ带 ����� �� �� �ֽ��ϴ�. �Ʒ��ڵ� ����

	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	auto p = s.begin();
	for (int i = 0; i < s.size(); i++) {
		int n = *(p + i); // �� ������ �� ��� ������ �����غ���
						// �׻�  ó������ �����ϹǷ� ������ �����ʴ�.
	}
}


#endif