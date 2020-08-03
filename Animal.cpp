#include "Animal.h"

Animal::Animal(int* map, int _size)
{
	int tmprandom = drawUInt(0, (_size - 1));

	*(map + tmprandom) = 2;

	uposition = tmprandom;
}

int Animal::move(int *map, int _size)
{
	int var = 0;

	int tmp = drawUInt(1, 2);

	*(map + uposition) = 0;

	if (tmp == 1)
	{
		if (uposition > 0)
		{
			uposition--;
		}
		else
		{
			uposition++;
		}
	}
	else
	{
		if (uposition < (_size - 1))
		{
			uposition++;
		}
		else
		{
			uposition--;
		}
	}

	if (*(map + uposition) == 1)
	{
		var = 1;
	}
	else
	{
		*(map + uposition) = 2;
	}



	return var;
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

bool Animal::checkIfEaten(int* map)
{
	if (*(map + uposition) == 1)
	{
		return true;
	}

	return false;
}