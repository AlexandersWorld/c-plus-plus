#include <iostream>

using String = std::string;
using namespace std;

class Entity
{
public:
    int x, y;

    Entity(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

int main()
{
    cout << "HEllo world" << endl;

    return 0;
}
