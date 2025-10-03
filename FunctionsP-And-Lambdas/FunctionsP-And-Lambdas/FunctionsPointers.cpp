#include <iostream>
#include <vector>

template<typename T, typename Func>
void ForEach(const std::vector<T>& values, Func fn)
{
	for (const T& v : values)
	{
		fn(v);
	}
}

int main2()
{
	std::vector<int> values = { 1,5,4,2,3 };
	std::vector<std::string> values2 = { "Ale","Xander","The","Great" };

	ForEach(values, [](int value) { std::cout << "Value: " << value << std::endl; });
	ForEach(values2, [](std::string value) { std::cout << "Value: " << value << std::endl; });

	std::cin.get();
	return 0;
}