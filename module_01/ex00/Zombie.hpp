#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	name_of_zombie;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce (void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif