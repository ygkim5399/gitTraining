#include <vector>
#include <algorithm>
#include <functional> // std::less<>, std::greater<> �� �̹� �ֽ��ϴ�.
#include "show.h"

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };


	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; } );


	// ���� ǥ������ ����
	// => �� ������ �����Ϸ��� �Ʒ� ó�� �����մϴ�.
	// => ��, ����ǥ������ "�Լ� ��ü"�� ����� �޶�� ��û�̰�, 
	// => �Լ� ��ü�� ����ϴ� �Ͱ� ������ ȿ���� ���� �ֽ��ϴ�.
	class CompilerGeneratedName
	{
	public:
		inline auto operator()(int a, int b) const 
		{ 
			return a < b; 
		}
	};
	std::sort(v.begin(), v.end(), CompilerGeneratedName() );
	//-----------------------------------------------------------

}