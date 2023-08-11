/* iterator ����

1. �ݺ��� ����
-> ++ �� �̵������ϰ� *�� ��� ���� ������ ��� ��


2. �ݺ����� ���º� �з� (2����)

(1) raw pointer 
(2) Ŭ������ ���� �� (++, *�� ������ �������� ��)
	-> 1���� slist_iterator ����


3. �ݺ����� ����
(1) �����̳ʿ��� ���� �� �ִ�. (s.begin(), s.end())
(2) ���������� ���� ����ϴ� �ݺ���
	-> ���� �ݺ���, ��Ʈ�� �ݺ���

4. �����̳ʿ��� ������ �ݺ����� 4���� ���� ***
	->	c.begin()
	->	c.rbegin()
	->	c.cbegin()
	->	c.crbegin()

5. past end iterator ***
	-> s.end() �� ���� �ƴ� �� ������ ����Ų��. 


6. iterator category ***
	-> �ݺ��ڰ� � ������ �� �� �ִ°��� ���� 5�� (c++17���� 6��) �з�
	->	input iterator
	->	output iterator
	->	forward iterator		(ex. single linked list)
	->	bidirectional iterator	(ex. list)
	->	random access iterator	(ex. vector) -> ���ӵ� �޸𸮿� ����!
	->	contiguous iterator		-> ���ӵ� �޸��� �ݺ���


7. �����̳ʰ� �����ϴ� ����� Ÿ�� ������, �ݺ��ڰ� ����Ű�� Ÿ�� ������ ***
	->	typename C::value_type
		typename ITER::value_type 
		typename std::iterator_traits<ITER>::value_type (raw pointer ���� ����)

8. ���Թݺ��� ����, ���Թݺ����� ����3��


9. ��Ʈ�� �ݺ��� ����, show() �Լ� �����


10. Ŭ���� ���ø��� ���� ����ϸ� �����ϴ�
	-> �Լ� ���ø��� �������

	std::make_reverse_iterator<std::list<int>::iterator> p(s.begin());
	->
	auto p = std::make_reverse_iterator(s.begin());


11. �ݺ��� ������, auto ��������� Ÿ�Ե� �˾Ƶ� ��

auto p = s.begin();
std::list<int>::iterator p = s.begin();


*/