#include <iostream>
#include <chrono>
#include <thread>
using namespace std::chrono;

int main()
{
	// ���� �������� "Meter, CentiMeter" ���� ���������
	// C++ ǥ�ؿ� "�ð� ���� Ÿ��" ��  �̹� ������� �ֽ��ϴ�.

	// �ᱹ, "duration" �Ѱ��� ������, ���ø� ����(����)�� �����ؼ�
	// => �ʿ��� ��� Ÿ���� �����Ѱ�!!!

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


	auto s2 = 10s;  // C++11, "user define literal" ���� ���
					// seconds operator""s(10) �̶�� �Լ��� ȣ��˴ϴ�

	auto m1 = 10min; // std::chrono::minutes m1(10)
	



	// 3. literals( h, min, s, ms, us, ns )
	seconds sec = 1min;

	sec = 1min + 3s; // 63
	sec += 40s;      // 103
	std::cout << sec.count() << std::endl; // 103

}