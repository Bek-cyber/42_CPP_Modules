#include "Bureaucrat.hpp"

int main() {
	Bureaucrat Jack("Jack", 2);
	Bureaucrat Frank("frank", 140);
	Form House("house", 100, 120);
	Form Car("car", 145, 140);
	
	std::cout << BOLDBLUE << "-----------NORM_TEST-----------" << RESET << std::endl;
	
	try {
		std::cout << House << std::endl;
		std::cout << Car << std::endl;
		Jack.signForm(House);
		Jack.signForm(Car);
		Frank.signForm(Car);
	}
	
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << BOLDBLUE << "-----------WrongCreate_TEST-----------" << RESET << std::endl;
	
	try {
		Form Emily("Emily", 5, 95);
		std::cout << Emily << std::endl;
		Form Nina("Nina", -5, 10);
	}
	
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		Form Nina("Nina", 5, 10);
		Form Emily("Emily", 5, -95);
	}
	
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << BOLDBLUE << "-----------CannotSign_TEST-----------" << RESET << std::endl;
	
	try {
		Jack.signForm(House);
		Frank.signForm(House);
	}
	
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}