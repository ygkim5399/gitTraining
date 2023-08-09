#include <tuple>
#include <iostream>

int main()
{
	// pair : C++98. ���� �ٸ� Ÿ���� ��ü 2�� ����
	std::pair<int, double> p1(3, 3.4);

	// pair �� 3�� �̻� �����մϴ�.
	std::pair<int, std::pair<double, short>> p2(3, { 3.4, 3 } );

	auto a1 = p2.second.first; // 3.4


	// C++11 ���ʹ� N ���� ���������� tuple �� �����˴ϴ�.
	std::tuple<int, double, short> t1(1, 3.4, 2);
	std::tuple					   t2(1, 3.4, 2); // C++17
	auto t3 = std::make_tuple(1, 3.4, 2); 

	// tuple �� ��� ������ std::get�� ���
	std::get<0>(t1) = 100;

	std::cout << std::get<0>(t1) << std::endl; // 100
}
// tuple �� ������ ���� ?? �� pair �� ����ؾ� �ϳ��� ?
// pair : C++98
// tuple : C++11  . �������� ���ø� �̶�� ������ ���ܼ�, 
//					tuple �� ����� �ְ� �Ǿ����ϴ�.

// �׷���, C++98 �� ������� Ŭ������ pair �� ��ȯ�ϰų� ���ڷ� �ް� �˴ϴ�.
// auto ret = set.insert(4); // ret �� pair �Դϴ�.

// ��κ� �ٸ� ����� tuple : �����Ϸ� ��ü�� �ν��ϴ� Ÿ��
// C++ tuple : Ŭ������ ���� ��. 
//			  ����ڵ��� ���� ���� �˴ϴ�.