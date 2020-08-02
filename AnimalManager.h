#pragma once
#include "Animal.h"
#include "Wolf.h"
#include "Sheep.h"

#include <iostream>
#include <list>
#include <vector>

class AnimalManager
{
public:
	AnimalManager();
	~AnimalManager();
	void print();
	void play();


private:
	int* map;
	int size;

	std::list<Sheep> lsheep;
	std::vector<Wolf> wolf;
};

