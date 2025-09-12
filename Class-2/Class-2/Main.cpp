#include <iostream>

struct Cordinates
{
	int x, y;

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int main2()
{
	Cordinates cor;
	cor.x = 2;
	cor.y = 8;

	Cordinates cor2;

	cor2.x = 5;
	cor2.y = 9;

	cor.Print();
	cor2.Print();

	return 0;
}