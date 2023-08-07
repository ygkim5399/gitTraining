// �ٽ� : convenient function template �̶�� ���...

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

// Ŭ���� ���ø��� ��ü�� ���� �����ϴ� "Ÿ�� ���� ������ ����"�� ���ϼ� �ֽ��ϴ�.
// �̶��� Ÿ�� �߷��� ������ �Լ� ���ø��� ����ؼ� ��ü�� ����� ���� ���ϴ�.
// => "convenient function template" �̶�� �̸��� ���� ����Դϴ�.
template<typename T>
list<T> make_list(int size, T value)
{
	return list<T>(size, value);
}



int main()
{
	// �Լ� ���ø� - C++98 ���� ���� Ÿ������ ��������.
	square<int>(3);	// Ÿ���� ��������� ����
	square(3);		// Ÿ�� ���� ������, �����Ϸ��� �Լ����ڸ� ����
					// T�� Ÿ���� �߷�. 

	list<int> s1(10, 3); // ok. Ÿ�� ���� ����
//	list      s2(10, 3); // C++17 ���� �����ڸ� ���� Ÿ�� �߷� ����. 
						 // C++14 ������ ����

//	auto s3 = make_list<int>(10, 3);
	auto s3 = make_list(10, 3);
}

