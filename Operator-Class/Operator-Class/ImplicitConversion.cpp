#include <iostream>

using String = std::string;

class Entity
{
private:
    String m_Name;
    int m_Age;
public:
    Entity(const String& name) : m_Name(name), m_Age(-1) {}
    Entity(int age) : m_Age(age), m_Name("Unkown") {}
};


static void Printable(const Entity& entity)
{
}

int main2()
{
    Entity a("Alexander");
    Entity b(22);

    Printable(22);
    Printable(String("Alexader"));
    Printable(Entity("Alexader"));

    std::cout << "Hello World!!!!!\n";

    return 0;
}
