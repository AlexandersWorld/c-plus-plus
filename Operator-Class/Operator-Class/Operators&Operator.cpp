#include <iostream>

using String = std::string;
using namespace std;

struct Vector2
{
    float x, y;

    Vector2(float x, float y)
        : x(x), y(y) {
    }

    Vector2 Add(const Vector2& other) const
    {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator+(const Vector2& other) const
    {
        return Add(other);
    }

    Vector2 operator*(const Vector2& other) const
    {
        return Multiply(other);
    }

    Vector2 Multiply(const Vector2& other) const
    {
        return Vector2(x * other.x, y * other.y);
    }

    bool operator==(const Vector2& other) const
    {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Vector2& other) const
    {
        return !(*this == other);
    }
};

std::ostream& operator<<(std::ostream& steam, const Vector2& other)
{
    steam << "(" << other.x << ", " << other.y << ")";
    return steam;
}

int main3()
{
    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 powerup(1.1f, 1.1f);

    Vector2 result2 = position.Add(speed.Multiply(powerup));
    Vector2 result = position + speed * powerup;

    cout << result2 << endl;
    cout << result << endl;
    cout << "HEllo world" << endl;

    return 0;
}
