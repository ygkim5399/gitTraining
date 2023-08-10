// 5_���������Ÿ��6.cpp => 1_set4.cpp
#include "show.h"
#include <set>

struct Compare
{
	bool operator()(int a, int b) const
	{
		return (a / 10) < (b / 10);
	}
};

int main()
{
	std::set<int, Compare> s;

	// 1. ������ ���д� ?
	s.insert(15);
	s.insert(25);
	s.insert(45);
	s.insert(35);
	s.insert(22);  // ����, �����ڸ��� 2�� ���� �̹� �ִ�. (25)
	show(s);



	// �Ʒ� 2���� �˻� ����� ��� ���ñ�� ?
	// �Ʒ� �ڵ尡 equality(���ϼ�)
	// std::find : ���� �˻�, 
	//             "==" �� ����ؼ� ���ϼ��� ����.
	//             ���� s �ȿ� 12�� �����Ƿ� ����. 
	auto ret1 = std::find(s.begin(), s.end(), 12); // ==
	
	if (ret1 == s.end())
		std::cout << "����" << std::endl;


	// �Ʒ��� equivalency(��� �˻�)
	// => ����ڰ� ������ �� �Լ�(Compare) ��� 
	auto ret2 = s.find(12);		// if ( ���Լ�(root, 12 ) )
								//		������ �ڽ����� �̵�
								// else if (  ���Լ�( 12, root ) )
								//		���� �ڽ����� �̵�
								// else
								//		ã�Ҵ�.


	std::cout << *ret2 << std::endl; // 15
}