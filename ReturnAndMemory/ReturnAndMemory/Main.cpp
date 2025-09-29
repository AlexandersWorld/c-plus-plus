#include <iostream>
#include <string>

struct Vector3
{
	float x, y, z;
};

int main()
{
	int inStack = 5;
	int array[5];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	Vector3 vector;

	int* inHeap = new int;
	int* harray = new int[5];
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;
	Vector3* hvector = new Vector3();

	*inHeap = 5;
	*harray = 1;

	std::cout << "Hello World!" << std::endl;

	std::cin.get();

	return 0;
}