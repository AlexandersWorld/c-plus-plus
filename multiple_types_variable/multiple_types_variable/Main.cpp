#include <iostream>
#include  <variant>

std::variant<std::string, int> ReadFileAsString()
{
	return {};
}

int main()
{
	std::variant<std::string, int> data;

	std::cout << sizeof(data) << std::endl;
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(std::string) << std::endl;

	data = 2;
	std::cout << std::get<int>(data) << std::endl;
	data = "Alexandre";
	std::cout << std::get<std::string>(data) << std::endl;

	if (auto value = std::get_if<std::string>(&data))
	{
		auto& v = *value;

		std::cout << "name exists: " << v << std::endl;
	}
	std::cin.get();
	return 0;
}