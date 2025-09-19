#include <iostream>

class Entity
{
private:
	std::string m_Name = "123";
	mutable int m_DebugCount = 0;
public:
	const std::string& GetName() const { return m_Name; }
};

int main2()
{
	const Entity e;

	int x = 8;

	auto f = [=]() mutable
		{
			x++;
			std::cout << x << std::endl;
		};
	f();

	return 0;
}