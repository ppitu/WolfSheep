#pragma once
#include "Animal.h"
#include "Wolf.h"

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
	int turn;

	std::list<Animal> lsheep;
	std::vector<Wolf> wolf;
};

