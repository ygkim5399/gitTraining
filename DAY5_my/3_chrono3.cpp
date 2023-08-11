#ifndef DAY5

#include <iostream>
#include <chrono>
#include <thread>
using namespace std::chrono;

int main()
{
	// ���� ���ſ��� "Meter, CentiMeter" ���� ���������,
	// c++ ǥ�ؿ� "�ð����� Ÿ��"�� �̹� ������� �ֽ��ϴ�.

	// �ᱹ "duration" �Ѱ��� ������ ���ø� ����(����)�� �����ؼ�
	// -> �ʿ��� ��� Ÿ���� ������ �� 


	// 1. predefined typedef
	hours		 h(1);     // using hours = duration<int, ratio<3600,1>>;
	minutes      m  = h;
	seconds      s  = h;
	milliseconds ms = h;
	microseconds us = h;
	nanoseconds  ns = h;

	std::cout << h.count() << std::endl;
	std::cout << m.count() << std::endl;
	std::cout << s.count() << std::endl;
	std::cout << ms.count() << std::endl;
	std::cout << us.count() << std::endl;
	std::cout << ns.count() << std::endl;

	// 2. �ð� ��ü�� �����ϴ� ���
	std::chrono::seconds s1(10); // 1. �ð� Ÿ���� ���� ���
	auto s2 = 10s;	// c++11, "user define literal" ���� ���
					// seconds operator""s(10) �̶�� �Լ��� ȣ��˴ϴ�.

	auto m1 = 10min; // std::chrono::minutes m1(10)


	// 3. literals( h, min, s, ms, us, ns )
	seconds sec = 1min;

	sec = 1min + 3s;	// 63
	sec += 40s;			// 103
	std::cout << sec.count() << std::endl; // 103


	// 4. ���� �����带 ��� ������ �Ʒ�ó�� �մϴ�.
	//std::this_thread::sleep_for(1000); // error. ���ڷ� ������ �ƴ� 
										// chrono Ÿ���� ������ �մϴ�.
	std::this_thread::sleep_for(10s); 
	std::this_thread::sleep_for(10ns); 
	std::this_thread::sleep_for(10us);

	// �Ǵ� �Ʒ�ó�� �ص� �˴ϴ�.
	std::this_thread::sleep_for(std::chrono::seconds(10));

}

#endif