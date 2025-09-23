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
};

class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr)
		: m_Ptr(ptr) {
	}

	~ScopedPtr() { delete m_Ptr; }
};

int main1()
{
	String hello = "Hello World!";

	{
		ScopedPtr e = new Entity();
	}
	cout << hello << "\n";

	return 0;
}
