#include <iostream>
#include<vector>

struct Vector3
{
    float x, y, z;

    Vector3(float x = 0, float y = 0, float z = 0)
        : x(x), y(y), z(z) {
    }
};

std::ostream& operator<<(std::ostream& stream, Vector3 v)
{
    stream << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return stream;
}

void Function()
{
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

class Singleton
{
public:
    static Singleton& Get()
    {
        static Singleton instance;
        return instance;
    }
    void Hello() { std::cout << "Hello Singleton\n"; }
};

int main1()
{
    std::vector<Vector3> vertices;

    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(4, 5, 6);

    for (Vector3 v : vertices)
    {
        std::cout << v << std::endl;
    }

    Function();
    Function();
    Function();
    Function();
    Function();

    Singleton::Get().Hello();

    return 0;
}

