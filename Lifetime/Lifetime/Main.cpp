#include <iostream>

using namespace std;
using String = string;

class Entity
{
public:
	Entity()
	{
		cout << "Created Entity!" << endl;
	}
	~Entity()
	{
		cout << "Destroyed Entity!" << endl;
	}

	void Print() {}
};

int main()
{
	String hello = "Hello World!\n";

	cout << hello;

	{
		unique_ptr<Entity> entity = make_unique<Entity>();

		entity->Print();
	}

	return 0;
}
