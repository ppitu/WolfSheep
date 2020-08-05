#include "Predator.h"

Predator::Predator(int *map, int _size, std::string _name)
{
	int tmprandom =	drawUInt(0, _size - 1);

	*(map + tmprandom) = 1;

	name = _name;
	uposition = tmprandom;
}

int Predator::move(int *map, int _size)
{
	unsigned int tmp = -1;

	*(map + uposition) = 0;

	if (uposition > 0)
	{
		uposition--;
	}
	else
	{
		uposition++;
	}

	
	if (*(map + uposition) == 2)
		tmp = uposition;

	*(map + uposition) = 1;

	return tmp;
}