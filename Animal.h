#pragma once

#include <iostream>
#include <string>
#include <random>


class Animal
{
public:

	Animal() = default;
	Animal(unsigned int _size);
	//~Animal() { std::cout << "Bay Animal\n"; }
	virtual int move(int *map);
	unsigned int drawUInt(int first, int last);
	virtual unsigned int getPosition();
	//unsigned int eat(int* map, unsigned int position);

protected:

	unsigned int usize;
	unsigned int uposition;

};
