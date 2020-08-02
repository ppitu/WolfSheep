#pragma once

#include <iostream>
#include <string>
#include <random>


class Animal
{
public:

	Animal() = default;
	virtual int move(int *map);
	unsigned int drawUInt(int first, int last);
	virtual unsigned int getPosition();

};
