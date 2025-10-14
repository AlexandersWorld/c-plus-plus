#include <iostream>

class Base
{
public:
	Base() {}
	virtual ~Base() {}
};

class Derived : public Base
{
public:
	Derived() {}
	~Derived() override {}
};

class AnotherClass : public Base
{
public:
	AnotherClass() {}
	~AnotherClass() override {}
};

int main()
{

	Derived* derived = new Derived();
	Base* base = derived;

	AnotherClass* ac = dynamic_cast<AnotherClass*>(base);

	std::cout << "Alexander's world!" << std::endl;
	delete derived;
	return 0;
}