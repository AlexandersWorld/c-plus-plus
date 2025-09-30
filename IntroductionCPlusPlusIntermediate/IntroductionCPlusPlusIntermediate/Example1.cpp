#include <iostream>
using namespace std;

void PrintString(string* str)
{
	cout << *str << "\n";
}

void PrintString(string& str)
{
	cout << str << "\n";
}

class ClassA
{
private:
	int& _number;
public:
	ClassA(int& n) : _number(n) {}
};

int main1()
{
	int number1 = 10;
	int number2 = 20;

	int& numberRef = number1;
	numberRef = number2;

	cout << number1 << "\n" << number2 << "\n" << numberRef << endl;

	string foo = "FooBar";

	PrintString(&foo);
	PrintString(foo);

	int num = 10;

	ClassA cls1(num);

	cin.get();
	return 0;
}