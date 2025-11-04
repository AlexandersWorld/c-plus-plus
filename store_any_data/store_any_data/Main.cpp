#include <iostream>
#include <any>

int main()
{
	std::any data;

	data = 2;
	data = "Alexander";
	data = std::string("Alexander");

	std::string data_str = std::any_cast<std::string>(data);
	
	std::cin.get();
}