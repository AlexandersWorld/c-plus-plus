#include <iostream>
#include <string>

class Entity
{
public:
	virtual void PrintName(std::string Name) {}
};

class Player : public Entity
{
};

class Enemy : public Entity
{
};

int main()
{
	Player* player = new Player();
	Entity* actuallyEnemy = new Enemy();

	Entity* actuallyPlayer = player;


	Player* p = dynamic_cast<Player*>(actuallyEnemy);

	if (p)
	{
		p->PrintName("Alexander's World!!");
	}
	Player* p1 = dynamic_cast<Player*>(actuallyPlayer);
}