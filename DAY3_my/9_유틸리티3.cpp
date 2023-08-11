#ifndef DAY3


#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

//namespace std {
//	// 정확히는 아래 클래스 모두 템플릿입니다. 
//	class ostream {};						// 표준 출력을 위한 클래스
//	class ofstream		: public ostream{};	// 파일 출력을 위한 클래스
//	class ostringstream : public ostream{};	// 메모리(string) 출력을 위한 클래스
//	
//	// 표준 출력을 위한 객체가 이미 만들어져 있습니다. 
//	ostream cout;
//
//}
int main()
{
	std::ofstream fout("a.txt");
	std::ostringstream sout;


	std::cout << "hello"; // 화면 출력
	fout << "hello";		// 파일 출력
	sout << "hello";		// sout 이 내부적으로 관리하는 string 에 쓰기

	std::string s = sout.str(); // sout 내부의 string 꺼내기

	std::cout << s; // 결국 "hello" 출력

}


#endif