#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// �־��� �������� "3�� ���"�� ã�� �ʹ�.
	auto p1 = std::find_if(v.begin(), v.end(), foo );
	auto p2 = std::find_if(v.begin(), v.end(), [](int n) { return n % 3 == 0; });


	int k = 3; // ����ڰ� �Է��� ���̶�� ����..

	// �־��� �������� "k�� ���"�� ã�� �ʹ�.
	// => foo �Լ��� ��� ������ �ұ�� ? 
	//    ��, foo�� find_if �� �������� ���ڴ� �Ѱ� �̾�� �մϴ�.
	//    �ᱹ. ���������� ���ԵǾ�� �մϴ�.
//	auto p3 = std::find_if(v.begin(), v.end(), foo);

	// => ���� ǥ������ "���������� ĸ��" �Ҽ� �����Ƿ� ���� �Ҽ� �ֽ��ϴ�.
	auto p4 = std::find_if(v.begin(), v.end(), [k](int n) { return n % k == 0; });
}

// find_if ���ڷ� �Ϲ� �Լ�(foo)�� ����ϸ�
// => ���� �Լ��� ������ �ֽ��ϴ�.


// find_if ���ڷ� ����ǥ������ ����ϸ�
// => ���� �Լ� + main �� ���������� ���� ���� �����մϴ�.
// => �̰��� "Ŭ����(closure)" ��� �մϴ�.

// Ŭ����(closure)
// => ���ƿ� ���� ���������� ĸ���Ҽ� �ִ� ����� ���� �Լ�





