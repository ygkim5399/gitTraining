#ifndef DAY3

#include <vector>
#include <list>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// .begin() ���� ������ �ݺ��ڴ�	
	// => Ŭ���� ���·� ������� �ݺ��� �Դϴ�.
	// => raw pointer �� �����ϰ� ��밡�������� raw pointer �� �ƴմϴ�.
	auto p = s.begin();
	++p; // p.operator++()



	// begin() vs data() ������
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p1 = v.begin();// v�� ù��° ��Ҹ� ����Ű�� �ݺ���
						// Ÿ���� int*�� �ƴ� 
						// vertor_iterator ���� ���� �̸� ���
						
	auto p2 = v.data();	// v�� ���������� ����ϴ� ������ �ּ�
						// �ᱹ int*
						// �ᱹ &v[0]
}



// github.com/codenuri/sstl 

// DAY3 �������� "QA3-1, QA3-2" �޾� �μ���

#endif