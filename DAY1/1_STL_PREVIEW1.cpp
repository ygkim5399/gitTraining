// 1_STL_PREVIEW1
#include <iostream>
#include <string>

int main()
{
	// C언어 에서의 문자열 처리 : char 배열 또는 포인터 사용
	char s1[] = "Hello";
	char s2[] = "Hello";

//	if (s1 == s2) {} // 문자열의 상등을 비교하려는 의도 인데..
					 // 실제로는 배열의 주소 비교
					 // 항상 false 
	if ( strcmp(s1, s2) == 0 ) {} //  ok

//	s2 = s1; // 의도 : 문자열 대입.
			 // 하지만 error. 배열의 이름에 대입할수 없다.
//	strcpy(s2, s1);
//	strcpy_s(s2, strlen(s1), s1);

	// C++ 은 std::string 을 사용하면 편리합니다.
	// => 문자열을 정수형 변수처럼 연산 가능
	std::string s3 = "Hello";
	std::string s4 = "Hello";

	if (s3 == s4) {}
	s3 = s4;
	s3 = s4 + s4;
//	s3 = s4 * 20; // 안되나요 ?? 파이썬 처럼.
				// 안됩니다. 그런데,, 만들면 됩니다. operator*() 재정의..
}







// DAY1.zip 압축 풀러 보세요

// 1. DAY1.sln 더블 클릭하면 VS에서 open 할수 있습니다.

// 2. 버전 설정해야 합니다.
//    => 프로젝트 메뉴 선택 후 제일 아래 있는 "DAY1속성" 메뉴 선택
//    => 플랫폼 도구집합, windows sdk 버전 설정하면 됩니다.

// 3. 빌드 하는 방법  : Ctrl + F5 로 빌드

// 4. 소스 파일을 빌드에 "포함/제외" 하는 방법
// => 소스 파일에서 오른쪽 버튼 누른후. 속성 메뉴 선택
// => "빌드에서 제외" 항목 변경