#pragma once

#include <iostream>
#include <string>
#include <random>
#include <iterator>


class Animal
{
public:

	Animal() = default;
	Animal(int* map, int _size);
	virtual int move(int *map, int _size);
	unsigned int drawUInt(int first, int last);
	unsigned int getPosition();
	bool checkIfEaten(int* map);

protected:
	unsigned int uposition;

};
