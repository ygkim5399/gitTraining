#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// 주어진 구간에서 "3의 배수"를 찾고 싶다.
	auto p1 = std::find_if(v.begin(), v.end(), foo );
	auto p2 = std::find_if(v.begin(), v.end(), [](int n) { return n % 3 == 0; });


	int k = 3; // 사용자가 입력한 값이라고 가정..

	// 주어진 구간에서 "k의 배수"를 찾고 싶다.
	// => foo 함수를 어떻게 만들어야 할까요 ? 
	//    단, foo를 find_if 에 보내려면 인자는 한개 이어야 합니다.
	//    결국. 전역변수가 도입되어야 합니다.
//	auto p3 = std::find_if(v.begin(), v.end(), foo);

	// => 람다 표현식은 "지역변수를 캡쳐" 할수 있으므로 쉽게 할수 있습니다.
	auto p4 = std::find_if(v.begin(), v.end(), [k](int n) { return n % k == 0; });
}

// find_if 인자로 일반 함수(foo)를 사용하면
// => 단항 함수만 보낼수 있습니다.


// find_if 인자로 람다표현식을 사용하면
// => 단항 함수 + main 의 지역변수를 같이 전달 가능합니다.
// => 이것을 "클로져(closure)" 라고 합니다.

// 클로져(closure)
// => 문맥에 속한 지역변수를 캡쳐할수 있는 기능을 가진 함수





