#include <iostream>
#include <string>

class Entity
{
private:
	int m_X, m_Y;
public:
	int GetX() const
	{
		return m_X;
	}
	void SetX(int x)
	{
		m_X = x;
	}
};

static void Print(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
}

int main()
{
	const char* name = "Hello";

	std::string hw = "Hello World!!";

	std::cout << name << std::endl;
	std::cout << hw << std::endl;

	Entity e;
	const int es = e.GetX();

	std::cin.get();
	return 0;
}
