#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
    float x, y, z;

    Vertex(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z)
    {

    }
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main2()
{
    std::vector<Vertex> vertices;

    vertices.push_back(Vertex());
    vertices.push_back(Vertex(3, 5, 6));
    vertices.push_back(Vertex(5, 7, 9));


    for (const Vertex& v : vertices)
    {
        std::cout << v << std::endl;
    }


    std::cin.get();

    return 0;
}