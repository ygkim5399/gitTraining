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
	list(int sz, int value) {}
};

int main()
{
	// 함수 템플릿
	square<int>(3);
	square(3);

	list<int> s1(10, 3);
	list<int> s2(10, 3);
}

