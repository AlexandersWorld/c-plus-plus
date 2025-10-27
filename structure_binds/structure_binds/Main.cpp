#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int, int> CreatePerson()
{
	return { "Alexander", 34, 25 };
}

int main()
{
	auto [name, age, size] = CreatePerson();

	std::cout << "Hello, my name is " << name << " and I've " << age << " years old, my size is " << size << std::endl;
}