#include <iostream>

int main()
{
	std::cout << "Multidimentional Arrays\n";

	int** a2d = new int*[5];
	for (int i = 0; i < 5; i++)
		a2d[i] = new int[5];

	for (int i = 0; i < 5; i++)
		delete[] a2d[i];

	delete[] a2d;



	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			a2d[i][j] = 2;
		}
	}

	int* array = new int[5 * 5];
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			array[x + y * 5] = 2;
		}
	}

	int*** a3d = new int**[50];
	for (int i = 0; i < 50; i++)
	{
		a3d[i] = new int* [50];
		for (int j = 0; j < 50; j++)
		{
			int** ptr = a3d[i];
			ptr[j] = new int[50];
		}
	}

	return 0;
}