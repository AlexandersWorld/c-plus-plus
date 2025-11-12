#include <iostream>

class Random
{
public:
	Random(const Random&) = delete;

	static Random& Get()
	{
		static Random instance;

		return instance;
	}

	static float Float() { return Get().IFloat(); }
private:
	Random() {}

	float IFloat() { return m_RandomGenerator; }

	float m_RandomGenerator = 0.5f;

	static Random s_Instance;
};

int main()
{
	float randomNumber = Random::Float();

	std::cout << randomNumber << std::endl;
	
	return 0;
}