#include <iostream>
#include <list>   
#include <vector>

// �ݺ��� ��ȿȭ
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = v.begin(); // �Ǵ�, std::begin(v);

	std::cout << *p << std::endl; // 1

	v.resize(10); // �� ���� vector v�� ���� ���۰� ����˴ϴ�.
				  // ������ ������ �ݺ��ڴ� ���̻�  ����Ҽ� �����ϴ�.
				  // �ݺ��ڰ� "��ȿȭ(invalidate)" �Ǿ��ٰ� �մϴ�.
					
			      // vector �� �ƴ� list ��� ���� ?
				  // => list �� ũ�⸦ Ű�ﶧ�� �ݺ��ڰ� ��ȿȭ ���� �ʽ��ϴ�.
				  // "cppreference.com" ���� std::vector �˻�

	std::cout << *p << std::endl; // ???
}



