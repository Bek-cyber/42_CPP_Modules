#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie* array_of_zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
		array_of_zombie[i].set_name(name);
	return array_of_zombie;
}