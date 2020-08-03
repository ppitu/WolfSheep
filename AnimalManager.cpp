#include "AnimalManager.h"

AnimalManager::AnimalManager()
{
	std::cout << "Map size: ";
	std::cin >> size;

	std::cout << "How many turns?\n";
	std::cin >> turn;

	map = new int[size];

	for (unsigned int i = 0; i < size; i++)
	{
		map[i] = 0;
	}
}

AnimalManager::~AnimalManager()
{
	delete[] map;
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
	lsheep.push_front(Animal(map, size));
	wolf.push_back(Wolf(map, size));

	print();

	if (lsheep.front().move(map, size) == 1)
	{
		std::cout << "Bye sheep\n";
		lsheep.pop_front();
	}

	int tmp;

	for (size_t i = 0; i < turn; i++)
	{
		tmp = wolf[0].move(map, size);

		if (tmp != -1)
		{
			std::cout << "Bye sheep\n";
			for (auto it = lsheep.begin(); it != lsheep.end(); )
			{
				if (it->checkIfEaten(map))
				{
					it = lsheep.erase(it);
				}
				else
				{
					++it;
				}
			}
		}

		int choose;
		std::cout << "Add new Animal?\n[1] Yes\n[2] No\n";
		std::cin >> choose;

		if (choose == 1)
		{
			lsheep.push_front(Animal(map, size));

			if (lsheep.front().move(map, size) == 1)
			{
				std::cout << "Bye sheep\n";
				lsheep.pop_front();
			}

		}

		system("cls");
		print();
	}

	
}