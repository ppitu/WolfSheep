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
	vanimal.push_back(Animal(map, size, "Sheep"));
	vpredator.push_back(Predator(map, size, "Wolf"));

	print();

	int tmp;

	for (size_t i = 0; i < turn; i++)
	{
		//system("cls");
		tmp = vpredator[0].move(map, size);

		if (tmp != -1)
		{
			for (auto it = vanimal.begin(); it != vanimal.end(); )
			{
				if (it->checkIfEaten(map))
				{
					std::cout << "Bye " << it->getName() << "\n";
					it = vanimal.erase(it);
				}
				else
				{
					++it;
				}
			}
		}

		int choose;
		print();
		std::cout << "Add new Animal?\n[1] Yes\n[2] No\n";
		std::cin >> choose;

		if (choose == 1)
		{
			vanimal.push_back(Animal(map, size, "Sheep"));
		}

		for (auto it = vanimal.begin(); it != vanimal.end(); )
		{
			if (it->move(map, size) == -1)
			{
				std::cout << "Bye " << it->getName() << "\n";
				it = vanimal.erase(it);
			}
			else
			{
				++it;
			}
		}
		print();
	}

	
}