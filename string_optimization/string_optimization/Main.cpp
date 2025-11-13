#include <iostream>
#include <string>

void* operator new(size_t size)
{
	std::cout << "Allocatig " << size << " bytes\n";
	return malloc(size);
}

int main()
{
	std::string name = "Alexander the great";


	std::cin.get();
	return 0;
}