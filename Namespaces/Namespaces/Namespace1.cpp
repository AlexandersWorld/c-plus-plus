#include <iostream>
#include <string>

namespace apple {
	void print(const std::string& text)
	{
		std::cout << text << std::endl;
	}
}

namespace orange
{
	void print(const char* text)
	{
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());
		std::cout << temp << std::endl;
	}
}

int main1()
{
	orange::print("Hello, World!");
	apple::print("Hello, World!");

	std::cin.get();
	return 0;
}