#include <iostream>
#include <vector>
#include <list>

// STL �����̳�, �ݺ��� �� "����� Ÿ��"

template<typename C>
void f1(C& c)
{
	// C �� �����̳� �Դϴ�.
	// C::value_type : C�� �����ϴ� ����� Ÿ�� ( ���� main �ڵ忡���� int)
	// => ��, C�� �迭�� ���� ����!
	typename C::value_type n1 = c.front(); 

	// ��, �� �ڵ�� auto�� �����ϴ�.
	auto n1 = c.front();
}

template<typename T>
void f2(T first)
{
	// T �� �ݺ���(iterator) �Դϴ�

	typename T::value_type n1;	// �ݺ��ڰ� ����Ű�� ����� Ÿ��
								// T�� raw pointer ��� ����! 

	typename std::iterator_traits<T>::value_type n2; // T�� raw pointer �� ok..

	// �� �ڵ尡 ���� ���Ǵµ�,, ���� �����մϴ�.
	// �׷���, C++20 ���� �ξ� �����ϰ� ��밡���� �����ϴ�.
//	std::iter_value_t<T> n3;  // C++20 �ɼ� �ʿ� 
}




int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	f1(v);
	f1(x);

	f2(v.begin());
}