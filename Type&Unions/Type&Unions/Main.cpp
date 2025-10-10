#include <iostream>
#include <vector>

template<typename T>
class Entity
{
private:
	std::vector<T> entities;

public:	
	Entity(std::vector<T>& array) : entities(array) {}

	void PrintSize() const {
		std::cout << "Size: " << entities.size() << std::endl;
	}
};

int main()
{
	std::vector<int> e = { 1,2,3 };

	Entity<int>* entity = new Entity<int>(e);

	entity->PrintSize();

	delete entity;

	std::cin.get();
	return 0;
}