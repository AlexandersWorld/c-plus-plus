#include <iostream>

using namespace std;

class Entity
{
private:
	int X, Y;
	void Print() {}
};

class Player : public Entity
{
protected:
	std::string Name;

public:
	int A, B;

	Player()
	{
		A = 2;
		B = 5;
	}

	void Print()
	{
		cout << "A:" << A << " " << "B:" << B << endl;
	}
};

int main1()
{
	cout << "Hello World" << endl;

	Player p;
	p.B = 2;
	p.A = 5;

	p.Print();

	return 0;
}