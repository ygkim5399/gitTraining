#ifndef DAY5

#include <iostream>
#include <chrono>

// chrono : �ð� ���� ���̺귯��
// chrono �� �����Ϸ���
// 1. std::ratio �� �����ϰ� 
// 2. std::chrono::duration �� �����ؾ� �մϴ�.



// duration ���� : 
//	-> �� �Ѱ��� �����ϴ� Ÿ��
//	-> ���ø� ���ڷ� "�����ϴ� ���� Ÿ��, ����" �� �����մϴ�.
//	-> Ư�� ������ ����(tick count)�� ǥ���ϴ� �ڷᱸ��
//				  10�� => 1���� 10��
//					   => 1/1000���� 10000��..

int main()
{
	// 1. duration ���
	// -> ���ø� ������ Ÿ���� �ٸ��� �ٸ� Ÿ���̹Ƿ� �Ʒ� d1, d2 �� �ٸ� Ÿ���Դϴ�.
	// -> ��, �����ϴ� ������ �ٸ����� �ٸ� Ÿ���� �˴ϴ�.
	std::chrono::duration<int, std::ratio<1, 100>>  d1(2);	// 1/100 * 2
	std::chrono::duration<int, std::ratio<1, 1000>> d2(d1);	//20����

	std::cout << d1.count() << std::endl; // 2
	std::cout << d2.count() << std::endl; // 20

	// 2. ���� duration �� ������ ������ ������ �������� ����� �˴ϴ�. 
	using Meter			=	std::chrono::duration<int, std::ratio<1, 1>>;
	using CentiMeter	=	std::chrono::duration<int, std::ratio<1, 100>>;
	//using MilliMeter	=	std::chrono::duration<int, std::ratio<1, 1000>>;
	using MilliMeter	=	std::chrono::duration<int, std::milli>;
	//using KiloMeter		=	std::chrono::duration<int, std::ratio<1000, 1>>;
	using KiloMeter		=	std::chrono::duration<int, std::kilo>;

	Meter m(3000); // 3000m
	CentiMeter cm = m; // 300000cm

	std::cout << cm.count() << std::endl; // 300000

	// Meter -> CentiMeter	��ȯ : ������ �ս��� �����Ƿ� ĳ���� �ʿ� ����
	// Meter -> KiloMeter	��ȯ : ������ �ս� ���ɼ��� �ֽ��ϴ�. ĳ���� �ʿ�

	//KiloMeter km = m; // error
	KiloMeter km = std::chrono::duration_cast<KiloMeter>(m);

	std::cout << km.count() << std::endl;

}
#endif