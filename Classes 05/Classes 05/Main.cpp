#include <iostream>
#include <array>

using namespace std;

class Entity
{
public:
	static const int exampleSize = 5;
	int example[exampleSize];

	std::array<int, exampleSize> another;

	Entity()
	{
		for (int i = 0; i < another.size(); i++)
			another[i] = 2;
	}
};

int main()
{
	int* another = new int[5];
	int example[5];

	int count = sizeof(example) / sizeof(int);
	
	for (int i = 0; i < 5; i++)
	{
		example[i] = 2;
		another[i] = 2;
	}

	cout << count << endl;

	delete[] another;
	
	cin.get();

	return 0;
}