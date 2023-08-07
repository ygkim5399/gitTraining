// 핵심 : convenient function template 이라는 기술...

template<typename T>
T square(T a)
{
	return a * a;
}

template<typename T> 
class list
{
public:
	list(int sz, T value) {}
};

// 클래스 템플릿의 객체를 직접 생성하는 "타입 인자 때문에 복잡"해 보일수 있습니다.
// 이때는 타입 추론이 가능한 함수 템플릿을 사용해서 객체를 만들면 쉬워 집니다.
// => "convenient function template" 이라는 이름을 가진 기술입니다.
template<typename T>
list<T> make_list(int size, T value)
{
	return list<T>(size, value);
}



int main()
{
	// 함수 템플릿 - C++98 시절 부터 타입인자 생략가능.
	square<int>(3);	// 타입을 명시적으로 전달
	square(3);		// 타입 인자 생략시, 컴파일러가 함수인자를 보고
					// T의 타입을 추론. 

	list<int> s1(10, 3); // ok. 타입 인자 전덜
//	list      s2(10, 3); // C++17 부터 생성자를 통한 타입 추론 가능. 
						 // C++14 까지는 에러

//	auto s3 = make_list<int>(10, 3);
	auto s3 = make_list(10, 3);
}

