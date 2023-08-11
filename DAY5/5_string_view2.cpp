// 5_string_view
#include <iostream>
#include <string>
#include <string_view>


void* operator new(std::size_t sz)
{
	std::cout << sz << "메모리 할당" << std::endl;
	return malloc(sz);
}


// 함수가 인자로 전달받은 문자열을 읽기만 한다면
// 다음중 최선의 코드는 ?
void f1(std::string name) {} // worst..!!!
				// => name 객체뿐아니라, 문자열 자체 까지 복사


void f2(const std::string& name) {}	// good 이지만 best는 아님.



void f3(std::string_view name)   {}	// best!!




int main()
{
	std::string s = "to be or not to be";
	f1(s); // 최악!!!
	//-----------------------------------------
	// 아래 경우는 f2, f3가 비슷합니다.
	f2(s);
	f3(s);
	//-------------------------------------------
	// 그런데!!! 아래를 생각해 보세요
	// 리터럴을 직접 보낼때
	std::cout << "=========================" << std::endl;
	f2("to be or not to be");
				// => 문자열을 가지고 string 임시객체 생성
				// => 임시객체 만들때, 힙에 문자열도 복사
				// => f2 호출 끝나고 임시객체 파괴!!!

//	f3("to be or not to be");	
				// => string_view 가 상수메모리에 있는 문자열을
				// => 가리키기만 하게 됩니다.

	std::cout << "=========================" << std::endl;
}

// 권장 : 함수 인자로 읽기만하는 문자열을 받을때는
// => const std::string&   보다
// => std::string_view 를 권장합니다.!!!

// RUST         C++
// String   => std::string
// &str     => std::string_view