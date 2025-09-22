#include <iostream>

class Entity
{
private:
    std::string m_Name;

public:
    Entity() : m_Name("Unkown") {}
    Entity(const std::string name) : m_Name(name) {}

    const std::string& GetName() const { return m_Name; }
};

int main1()
{
    int a = 2;
    int* b = new int[50]; // 200 byts;

    Entity* e = new Entity();

    delete e;
    delete[] b;

    std::cout << "Hello World!\n";

    return 0;
}
