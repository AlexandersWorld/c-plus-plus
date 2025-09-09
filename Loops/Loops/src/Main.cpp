#include <iostream>

template <typename T>
void Log(const T& message)
{
	std::cout << message << std::endl;
}

int main()
{
	for (int i = 0;i < 5;)
	{
		Log("Hello World");

		if (i < 5) i++;
	}
	int i = 0;

	while (i < 5)
	{
		Log("Hello World");

		i++;
	}

	std::string interate = "Hello, you can interate with me ?";

	for (int i = 0; i < interate.length(); i++)
	{
		Log(interate[i]);
	}

	return 0;
}