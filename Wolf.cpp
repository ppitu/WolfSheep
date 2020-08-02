#include "Wolf.h"

Wolf::Wolf(int *map, int _size)
{
	int tmprandom =	drawUInt(0, _size);

	*(map + tmprandom) = 1;

	uposition = tmprandom;
	usize = _size;
}

int Wolf::move(int *map)
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