#include <iostream>
#include "MyClass.cpp"

int main()
{
	int num = MyClass::Instance()->GetVal();

	std::cout << "Num instancied: " << num << std::endl;

	return 0;
}