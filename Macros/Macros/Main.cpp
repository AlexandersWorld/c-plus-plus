#include <iostream>
#include <string>

#define WAIT std::cin.get()
#define LOG(x) std::cout << x << std::endl

using String = std::string;

int main()
{
	String name = "Hello!";

	LOG(name);

	WAIT;
	return 0;
}