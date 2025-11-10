#include <iostream>

static uint32_t s_AllocCount = 0;


void* operator new(size_t size)
{
	s_AllocCount++;
	std::cout << "Allocating " << size << "bytes\n";
	return malloc(size);
}
#define STRING_VIEW 1

#if STRING_VIEW
void PrintName(std::string_view name)
{
	std::cout << name << std::endl;
}
#else
void PrintName(const std::string& name)
{
	std::cout << name << std::endl;
}
#endif

int main()
{
	std::string name = "Alexander the great";

#if STRING_VIEW
	std::string_view firstName(name.c_str(), 9);
	std::string_view lastName(name.c_str() + 10, 20);
#else
	std::string firstName = name.substr(0, 9);
	std::string lastName = name.substr(10, 20);
#endif

	PrintName("Alexandre");
	PrintName(firstName);
	PrintName(lastName);

	std::cout << s_AllocCount << " allocations" << std::endl;
	std::cin.get();
}