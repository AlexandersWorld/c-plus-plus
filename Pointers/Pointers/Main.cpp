#include <iostream>

#define Log(x) cout << x << endl;

using namespace std;


static void Increment(int& value)
{
	value++;
}

int main()
{
	//int var = 8;
	//int* ptr = &var;

	//*ptr = 10;

	//Log(var);

	//char* buffer = new char[8];
	//memset(buffer, 10, 8);

	//delete[] buffer;

	int a = 5;
	int b = 8;
	Increment(a);


	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;

	Log(a);
	Log(b);

	cin.get();
}