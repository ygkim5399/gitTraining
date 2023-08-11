#ifndef DEBUG

#include <iostream>
#include <list>
#include <iterator>


// �ٽ� : ���Թݺ��ڸ� ����� 3���� ���

template <typename T>
std::back_insert_iterator<T> xback_inserter(T& c) {
	return std::back_insert_iterator<T>(c);
}

int main(int argc, char** argv)
{
	std::list<int> s = { 1, 2, 3, 4, 5 };

	/* �����̳ʿ� ��Ҹ� �߰��Ϸ���
	���1 . ����Լ� push_back() ���
	*/
	s.push_back(10);
	// ���2. ���� �ݺ��� ���
	std::back_insert_iterator bi(s); // c++17


	// ���3
	std::back_insert_iterator<std::list<int>> bi2(s); // C++17 ����
	// -> �Լ������� ����ؼ�..
	auto bi3 = xback_inserter(s); // Ÿ���� �������� �ʾƵ� ok


	//// ����


	*bi = 20; // *����� ��

	++bi; // ++ �ص��ǰ� ���ص��˴ϴ�.
			// ��� ++�� �ƹ��ϵ� ���� �ʽ��ϴ�. 
			// ������ std::copy ������ �������� ++�� �ƹ��ϵ� ���ϴ��� �Ǳ��ؾ��մϴ�.

	*bi = 30;


}


#endif