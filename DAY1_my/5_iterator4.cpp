#ifndef DEBUG

#include <iostream>
#include <list>   
#include <vector>

// �ݺ��� ��ȿȭ
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = std::begin(v);

	std::cout << *p << std::endl;

	v.resize(10); // �� ���� vector v �� ���ι��۰� ����˴ϴ�. 
					// ������ ������ �ݺ��ڴ� �� �̻� ����� �� �����ϴ�.
					// �ݺ��ڰ� ��ȿȭ(invalidate)�Ǿ��ٰ� �մϴ�. 

					// vector �� �ƴ� list ��� ����? 
					//	-> list �� ũ�⸦ Ű�ﶧ�� �ݺ��ڰ� ��ȿȭ���� �ʽ��ϴ�.
	std::cout << *p << std::endl;
}


#endif