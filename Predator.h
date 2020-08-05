#pragma once

#include <random>

#include "Animal.h"

class Predator : public Animal
{
public:
    Predator(int *map, int size, std::string _name);
    int move(int *map, int _size);
   
};

