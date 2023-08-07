#include <iostream>
#include <vector>
#include <list>

/*
void print_first_element(std::vector<int>& v)
{
	int n = v.front();
	std::cout << n << std::endl;
}
*/
/*
template<typename T>
void print_first_element(std::vector<T>& v)
{
	T n = v.front();

	std::cout << n << std::endl;
}
*/
template<typename T>
void print_first_element(T& v)
{
	// T               : std::list<double>
	// T::value_type  : std::list<double>::value_type => double
	typename T::value_type n = v.front();
	
	std::cout << n << std::endl;
}

int main()
{
//	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<double> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<double> v = { 1,2,3,4,5,6,7,8,9,10 };

	print_first_element(v);
}

// ���ø� ����� �����̳ʰ� "�����ϴ� Ÿ��"�� �˰� �������� �ֽ��ϴ�.
// ( �� print_first_element ó��)
// �׷���, STL�� ��� �����̳ʴ� �Ʒ� ó���Ǿ� �ֽ��ϴ�.
/*
template<typename T> class list
{
public:
	using value_type = T; // �ٽ�!!!
						  // typedef T value_type ;

	//......
};
list<int> s = { 1,2,3 };

list<int>::value_type n = s.front(); // n�� Ÿ���� �����غ�����..
									 // int n
*/

// �ٽ� 1. typename Ű���� �ʿ��� ���� �˾Ƶμ���
// 
//      2. C �� �����̳� �϶� "C::value_type" �� ����� Ÿ���̶�� ��

//		3.
// �Ϲ� Ŭ���� : ��� ����Ÿ, ��� �Լ�
// STL �����̳�: ��� ����Ÿ, ��� �Լ�, ��� Ÿ��