#include <iostream>

class Printable
{
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public Printable {
public:
	virtual std::string GetName() = 0;
};

class Player : public Entity {
private:
	std::string m_Name;
public:
	Player(const std::string& name) : m_Name(name) {}
	std::string GetClassName() override { return "Player"; }
	std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

int main()
{
	Entity* e = new Player("Tubarão leitoa");
	PrintName(e);

	Player* p = new Player("Zagalo13");
	PrintName(p);

	return 0;
}