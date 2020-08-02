#include "AnimalManager.h"

AnimalManager::AnimalManager()
{
	int n;

	std::cout << "Map size: ";
	std::cin >> n;

	map = new int[n];
	size = n;

	for (unsigned int i = 0; i < n; i++)
	{
		map[i] = 0;
	}
}

AnimalManager::~AnimalManager()
{
	delete [] map;
}

void AnimalManager::print()
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << *(map + i) << " ";
	}

	std::cout << "\n";
}

void AnimalManager::play()
{
	lsheep.push_front(Sheep(map, size));
	wolf.push_back(Wolf(map, size));

	print();

	lsheep.front().move(map);

	int tmp;

	for (size_t i = 0; i < 10; i++)
	{
		tmp = wolf[0].move(map);

		if (tmp != -1)
		{
			lsheep.pop_front();
		}

		print();
	}

}