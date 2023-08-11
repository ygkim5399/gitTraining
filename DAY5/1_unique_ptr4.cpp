#include <vector>
#include <memory>
#include <iostream>

int main()
{
//	std::vector<AA> v;
//	AA aa;
//	v.push_back(aa); // 이순간 aa 를 보관하는 것이 아니라
					 // aa의 복사본을 보관하게 됩니다.
					 // 
	// 따라서, STL 컨테이너에 보관되는 타입은 
	// => 반드시 "복사 생성자"를 사용할수 있어야 합니다.
	// => 복사 될수 없는 타입은 저장될수 없습니다.
	
}