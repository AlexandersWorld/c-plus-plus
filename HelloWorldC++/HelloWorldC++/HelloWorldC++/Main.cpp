#include <iostream>
#include <string>

using namespace std;
using std::cin;

//class Character
//{
//	string name;
//	int age;
//	char color;
//	float height;
//	float weight;
//
//	public:
//		Character(string name, int age, char color, float height, float weight)
//		{
//			this->name = name;
//			this->age = age;
//			this->color = color;
//			this->height = height;
//			this->weight = weight;
//		}
//		void MMC()
//		{
//			cout << "CHARACTER MMC: " <<  this->weight / (this->height * this->height) << endl;
//		}
//		void Introduce()
//		{
//			cout << "Hello my name is " << this->name << " and my age is " << this->age << endl;
//		}
//};

static int calculateSum(int bottom, int top)
{
	int result = 0;
	int start = (bottom % 2) == 0 ? bottom : bottom + 1;

	for (int i = start; i <= top; i += 2)
	{
		result += i;
	}

	return result;
}

static int calculate(int bottom, int top)
{
	if (bottom >= top) return 0;
	
	return calculateSum(bottom, top);
}

int main()
{
	//int age;
	//string name;

	//cout << "Digite your age: ";
	//cin >> age;
	//cin.ignore(); // Limpa o buffer do teclado

	//cout << "Digite your name: ";
	//getline(cin, name);
	//
	//cout << "Hello World" << '\n';


	//cout << "Name: " << name << endl;
	//cout << "Idade: " << age + 5 << endl;
	//cin.get();

	//int expoent;
	//cout << "Tabuada" << endl;
	//cin >> expoent;

	//for (int i = 1; i <= 10; i++)
	//{
	//	cout << expoent << " x " << i << " = " << expoent * i << endl;
	//}

	//string name;
	//string lastName;
	//
	//cout << "Digite your first name: ";
	//cin >> name;

	//cout << "Digite your last name: ";
	//cin >> lastName;


	//cout << "Your full name is " << name + " " + lastName << endl;

	//int a = 8;
	//a++;

	//const char* string = "Hello";

	//for (int i = 0; i < 5; i++)
	//{
	//	const char c = string[i];
	//	cout << c << endl;
	//}

	//string charName;
	//int charAge;
	//char charColor;
	//float charWeight;
	//float charHeight;

	//cout << "Create your character" << endl;
	//cout << "Digite character name: ";
	//getline(cin, charName);

	//cout << "Digite age: ";
	//cin >> charAge;

	//cout << "Digite color (B,W,Y): ";
	//cin >> charColor;

	//cout << "Digite your wheight: ";
	//cin >> charWeight;

	//cout << "Digite your height: ";
	//cin >> charHeight;

	//cout << "Name: " << charName << " Age: " << charAge << " Char Color: " << charColor << endl;

	//Character character(charName, charAge, charColor, charHeight, charWeight);

	//character.MMC();
	//character.Introduce();


	cout << calculate(6, 10) << endl;

	return 0;
}