#include <iostream>
#include <array>

template<class T, size_t l>
void PrintArray(const std::array<T, l>& data)
{
	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << std::endl;
	}
}

int main()
{
	std::array<int, 5> array{ 1,2,3,4,5 };
	std::array<std::string, 3> array2 { "Strawberries", "Banana", "Apple" };

	PrintArray(array);
	PrintArray(array2);

	return 0;
}