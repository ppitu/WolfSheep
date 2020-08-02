#include "Animal.h"

Animal::Animal(unsigned int _size) : usize(_size)
{
}

int Animal::move(int* map)
{
	return 0;
}

unsigned int Animal::drawUInt(int first, int last)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(first, last);

	return distrib(gen);
}

int unsigned Animal::getPosition()
{
	return uposition;
}