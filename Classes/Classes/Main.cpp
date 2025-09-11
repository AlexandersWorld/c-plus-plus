#include <iostream>

using namespace std;

class Player {
public:
	int x;
	int y;
	float speed;

	Player(int x, int y, float speed)
	{
		this->x = x;
		this->y = y;
		this->speed = speed;
	}

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

struct Vec2
{
	float x, y;

	void Add(const Vec2& other)
	{
		x += other.x;
		y += other.y;
	}
};

int main()
{
	Player player(1,1,10.0f);

	cout << player.speed << endl;

	player.Move(1, -1);
	return 0;
}