#include <iostream>
#include <string>

using String = std::string;

template<typename T, int N>
class Array
{
private:
	T m_Array[N];
public:
	int GetSize() const { return N; }
};

int main2()
{
	Array<String, 5> array;

	std::cout << array.GetSize() << std::endl;

	std::cin.get();

	return 0;
}