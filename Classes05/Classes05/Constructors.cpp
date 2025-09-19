#include <iostream>

class Example
{
public:
	Example()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	Example(int x)
	{
		std::cout << "Created Entity with " << x << "!" << std::endl;
	}
};

class Entity
{
private:
	std::string m_Name;
	int m_DebugCount = 0;
	Example m_Example;
public:
	Entity()
		: m_Example(8)
	{
	};

	Entity(const std::string& name)
		: m_Name(name) {
	}

	const std::string& GetName() const { return m_Name; }
};

int main3()
{
	Entity e0;
	return 0;
}