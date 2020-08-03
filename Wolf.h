#pragma once

#include <random>

#include "Animal.h"

class Wolf : public Animal
{
public:
    Wolf(int *map, int size);
    int move(int *map, int _size);
   
};

