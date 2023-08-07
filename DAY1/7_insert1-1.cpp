#include <iostream>
#include <list>
#include <iterator>

// �ٽ� : ���Թݺ��ڸ� ����� 2���� ���


template<typename T>
std::back_insert_iterator<T> xback_inserter(T& c)
{
	return std::back_insert_iterator<T>(c);
}

int main()
{
	std::list<int> s = { 1, 2, 3, 4, 5 };

	// Ŭ���� �̸��� ���� ����ؼ� ���� �ݺ��� ����
	std::back_insert_iterator bi1(s);                   // C++17
	std::back_insert_iterator< std::list<int> > bi2(s); // C++17 ����

	// �Լ� ������ ����ؼ� ����
//	auto bi3 = xback_inserter(s); // Ÿ���� �������� �ʾƵ� ok..
	auto bi3 = std::back_inserter(s); // �̹� ǥ�ؿ� �ֽ��ϴ�.


	*bi1 = 20; // * �������

	++bi1;	// ++ �ص� �ǰ�, ���ص� �˴ϴ�. 
			// ��� ++�� �ƹ��ϵ� ���� �ʽ��ϴ�.
			// ������ std::copy �����κ������� ++�� �ƹ��ϵ� ���ϴ��� �Ǳ� �ؾ� �մϴ�.

	*bi1 = 30;
}
