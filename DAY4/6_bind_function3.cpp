#include <iostream>
#include <string>
#include <map>
#include <functional>
#include <vector>
using namespace std::placeholders;


class NotificationCenter
{
	using HANDLER = std::function<void()>;

	std::map<std::string, std::vector<HANDLER> > notif_map;
public:
	void addObserver(const std::string& key, HANDLER func)
	{
		notif_map[key].push_back(func);
	}
	void postNotificationWithName(const std::string& key)
	{
		for (auto f : notif_map[key] ) // notif_map[key] �� �ᱹ vector
		{
			f();
		}
	}
};

void foo()      { std::cout << "foo " << std::endl; }
void goo(int a) { std::cout << "goo "  << std::endl; }

int main()
{
	// IOS ���߿� ���Ǵ� cocoa touch ���̺귯������ "�뺸����"��� ������ �ֽ��ϴ�.
	NotificationCenter nc;

	nc.addObserver("LOWBATTERY", &foo);

	nc.addObserver("LOWBATTERY", std::bind(&goo, 1));

	nc.addObserver("DISCONNECT_WIFI", std::bind(&goo, 2) );

	nc.addObserver("DISCONNECT_WIFI", []() { std::cout << "lambda\n"; } );


	// ���͸� ����ʿ��� ���͸��� ����������
	nc.postNotificationWithName("LOWBATTERY");
}




