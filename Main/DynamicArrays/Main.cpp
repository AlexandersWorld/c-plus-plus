#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
    float x, y, z;

    Vertex(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z)
    {

    }

    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copied!" << std::endl;
    }
};

int main()
{
    std::vector<Vertex> vertices;
    vertices.reserve(3);

    vertices.emplace_back(3, 5, 6);
    vertices.emplace_back(5, 7, 9);
    vertices.emplace_back(5,7,9);

    for (const Vertex& v : vertices)
    {
        std::cout << v.x << ", " << v.z << ", " << v.y << std::endl;
    }

    std::cin.get();

    return 0;
}