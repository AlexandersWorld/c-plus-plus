#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

void ForEach(const std::vector<int>& values, std::function<void(int)> func)
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = { 5,4,3,1,2 };

	auto value = std::find_if(values.begin(), values.end(), [](int value) {
		return value > 3;
		});

	std::cout << *value << std::endl;

	auto lambda = [&](int value) { std::cout << "Value: " << value << std::endl;};

	ForEach(values, lambda);

	std::cin.get();
	return 0;
}