#include <iostream>


class Entity
{
public:
	float X, Y;

	~Entity()
	{
		std::cout << "Destroyed Entity" << std::endl;
	}

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Created Entity" << std::endl;
	}

	void Printf()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

void Function()
{
	Entity e;
	e.Printf();
}

int main()
{
	std::cout << "Hello World" << std::endl;

	Function();

	std::cin.get();
	return 0;
}