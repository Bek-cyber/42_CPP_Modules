#include "Karen.hpp"

void Karen::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. " << std::endl;
	std::cout << "I just love it!" << std::endl;
}

void Karen::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. " << std::endl;
	std::cout << "You don’t put enough! " << std::endl;
	std::cout << "If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(int level) {
	Ptr_fun call_func[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	switch (level) {
		case 0:
			(this->*call_func[0])();
		case 1:
			(this->*call_func[1])();
		case 2:
			(this->*call_func[2])();
		case 3:
			(this->*call_func[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}