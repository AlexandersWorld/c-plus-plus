#include <iostream>
#include <string>
#include "Factory.h"

using String = std::string;

using namespace std;

static void Print(const String& message, bool breakLine = true)
{
	breakLine ? cout << message << endl : cout << message;
}

int main()
{
	int classNumber;
	String className;
	Print("----------------------------------------");
	Print("Create your character");
	Print("Name: ", false);
	getline(cin, className);

	Print("Class (Warrior [1], Mage [2], Rogue [3], Hunter [4]): ", false);
	cin >> classNumber;

	unique_ptr<BaseRole> role = GetRole(classNumber, className);

	if(role)
		Print("Name: " + role->GetName() + " Class role: " + role->GetRole());

	cin.get();
	return 0;
}