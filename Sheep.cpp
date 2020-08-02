#include "Sheep.h"

Sheep::Sheep(int* map, int _size)
{
	int tmprandom = drawUInt(0, (_size - 1));

	*(map + tmprandom) = 2;

	uposition = tmprandom;
	usize = _size;
}

int Sheep::move(int* map)
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
		if (uposition < (usize - 1))
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

unsigned int Sheep::getPosition()
{
	return uposition;
}