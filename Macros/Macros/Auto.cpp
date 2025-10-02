#include <iostream>
#include <string>
#include <vector>

using String = std::string;

const char* GetName()
{
	return "Alexander the great";
}

int main2()
{
	std::vector<std::string> fruits;
	fruits.push_back("Orange");
	fruits.push_back("Banana");
	fruits.push_back("Strawberry");

	for (auto it = fruits.begin(); it != fruits.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	return 0;
}