// 7_array2
#include <iostream>
#include <array>

// �Ʒ� �ڵ带 ������ ������
template<typename T, std::size_t N> struct array
{
	T buff[N];

	int size() const { return N; }
};

int main()
{
	// ����ü �ȿ� �迭�� ������ �Ʒ� ó�� �ʱ�ȭ �����մϴ�.
	std::array<int, 5> arr = { 1,2,3,4,5 };

	int sz = arr.size();
	
	arr.resize(10); // �ɱ�� ??
}
