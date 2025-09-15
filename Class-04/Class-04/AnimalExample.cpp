#include <iostream>


class Animal
{
public:
	void Sleep()
	{
		std::cout << "Sleeping.." << std::endl;
	}
	void Eat()
	{
		std::cout << "Eating.." << std::endl;
	}
	virtual void MakeNoise()
	{
		std::cout << "zzzzz" << std::endl;
	}
};

class Dog : public Animal
{
public:
	void MakeNoise() override {
		std::cout << "WOOF WOOF" << std::endl;
	}
};

class Cat : public Animal
{
public:
	void MakeNoise() override
	{
		std::cout << "MIAU MIAU" << std::endl;
	}
};

class House
{
public:
	void Enter(Animal& animal)
	{
		std::cout << "Animal enters making a noise: " << std::endl;
		animal.MakeNoise();
	}
};