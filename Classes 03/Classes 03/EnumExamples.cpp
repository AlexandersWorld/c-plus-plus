#include <iostream>


enum Example : char
{
	A = 5, B, C
};

int a = 0;
int b = 1;
int c = 2;

int main1()
{

	Example value = B;

	if (Example::B == B)
	{
		std::cout << "Hello World" << std::endl;
	}


	std::cin.get();
	return 0;
}