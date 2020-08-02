#pragma once
#include "Animal.h"
class Sheep :
    public Animal
{
public:
    Sheep() = default;
    Sheep(int* map, int _size);
    ~Sheep() { std::cout << "Bay sheep\n"; }
    int move(int* map);
    unsigned int getPosition();

protected:
    unsigned int usize;
    unsigned int uposition;
};

