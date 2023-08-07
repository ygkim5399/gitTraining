class Test
{
public:
	enum { value = 1 };
	typedef int DWORD;
};
int p = 0;

template<typename T> void foo(T a)
{
	// �Ʒ� 2�ٿ��� * �� �ǹ̸� ������ ������(1. ���ϱ�, 2. ������ ���� ����)
	Test::value * p;	// 1 * 0, ��, * �� ���ϱ� ������
	Test::DWORD * p;	// int* p     * �� ������ ������

	// "Ŭ�����̸�::�̸�" ���� "�̸�"�� �ǹ̴�
	// 1. ��		: enum ���, static ��� ����Ÿ
	// 2. Ÿ��  : typedef,  using

	// dependent name(���� �̸�)
	// => ���ø� ���� T�� �����ؼ� ������ �̸�
	// => �⺻�����δ� ������ �ؼ�..!
//	T::value * p2;	// error
//	T::DWORD * p3;	// error. ���ϱ�� �ؼ��ϴµ�, p3�� ����.

	typename T::DWORD* p3; // ok.. "T::DWORD" ��� ���� �̸���
							//		���� �ƴ� Ÿ���� �̸��̶�� �˷��ִ°�
}



int main()
{
	Test t;
	foo(t);
}