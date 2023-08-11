#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
using namespace std::chrono;

// system_clock : ���� �ð��� ������ ����ϴ� Ŭ����, non monotonic clock
// 
// time_point   : �ð��� �������� duration<>�� �����ϴ� Ŭ����
//				  ex) 1970�� 1�� 1�� ���� 16880 �ð� ���
//					"���� ����, �󸶳� ����߳�(��, ����)"

// epoch time : �������� 1970�� 1�� 1�� �� �������� �ϴ� ��

int main()
{
	// 1. ���� �ð��� ��� ���
	system_clock::time_point tp = system_clock::now(); // now()�� static ����Լ�
								// std::chrono::system_clock::now()



	// 2. time_point => duration ����... ���е��� �������� ��� ����� ĳ���� �ʿ�..
	nanoseconds nanosec = tp.time_since_epoch();
					// => ���簡 1970�� 1�� 1�� �� �������� "�� ������"�� ����ߴ°�

	seconds     sec     = duration_cast<seconds>(tp.time_since_epoch());
	
	std::cout << nanosec.count() << std::endl;
	std::cout << sec.count() << std::endl;



	using days = duration<int, std::ratio<60 * 60 * 24>>;
	std::cout << (duration_cast<days>(tp.time_since_epoch())).count() << std::endl;


	// 3. time_point => Į���� ������ ��¥�� �����ϱ�
	time_t t = system_clock::to_time_t(tp); // 1. time_point => struct time_t

	char s[32] = { 0 };
	ctime_s(s, 32, &t);		// time_t => char[]

	std::cout << s << std::endl;


	// C++20
//	std::string s = std::format("{:%Y%m%d%H%M}", tp);
//	std::cout << s << '\n';
}



