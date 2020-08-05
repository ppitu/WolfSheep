#pragma once
#include "Animal.h"
#include "Predator.h"

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

	std::vector<Animal> vanimal;
	std::vector<Predator> vpredator;
};

