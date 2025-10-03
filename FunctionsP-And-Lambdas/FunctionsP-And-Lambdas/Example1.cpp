#include <iostream>
#include <string>

void HelloWorld(int a, std::string message)
{
	std::cout << message << " Value: " << a << std::endl;
}

int main1()
{
	typedef void(*HelloWorldFunction)(int, std::string);

	std::string complement = "Hello sir, how are your?";

	std::cout << complement << std::endl;

	HelloWorldFunction f = HelloWorld;

	f(5, "Alexander's");
	f(3, "World");


	std::cin.get();
	return 0;
}