#include <iostream>
using namespace std;

class GoodClass
{
private:
	string _str;
public:
	GoodClass(string str) : _str(str) {}
};


class BadClass
{
private:
	string _str;
public:
	BadClass(string str)
	{
		_str = str;
	}
};

int main2()
{
	GoodClass cls1("Hello");

	BadClass cls2("Hello");

	cin.get();
	return 0;
}